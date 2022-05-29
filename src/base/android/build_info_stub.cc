// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <string>

#include "base/android/build_info.h"
#include "base/notreached.h"

namespace base {
namespace android {

struct BuildInfoSingletonTraits {
  static BuildInfo* New() { return new BuildInfo({}); }

  static void Delete(BuildInfo* x) {
    // We're leaking this type, see kRegisterAtExit.
    NOTREACHED();
  }

  static const bool kRegisterAtExit = false;
#if DCHECK_IS_ON()
  static const bool kAllowedToAccessOnNonjoinableThread = true;
#endif
};

BuildInfo::BuildInfo(const std::vector<std::string>& params)
    : brand_(""),
      device_(""),
      android_build_id_(""),
      manufacturer_(""),
      model_(""),
      sdk_int_(0),
      build_type_(""),
      board_(""),
      host_package_name_(""),
      host_version_code_(""),
      host_package_label_(""),
      package_name_(""),
      package_version_code_(""),
      package_version_name_(""),
      android_build_fp_(""),
      gms_version_code_(""),
      installer_package_name_(""),
      abi_name_(""),
      firebase_app_id_(""),
      custom_themes_(""),
      resources_version_(""),
      target_sdk_version_(0),
      is_debug_android_(false),
      is_tv_(false),
      version_incremental_(""),
      hardware_(""),
      is_at_least_t_(false),
      is_automotive_(false),
      is_at_least_u_(false),
      targets_at_least_u_(false),
      codename_("") {}

// static
BuildInfo* BuildInfo::GetInstance() {
  return Singleton<BuildInfo, BuildInfoSingletonTraits >::get();
}

}  // namespace android
}  // namespace base
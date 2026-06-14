#pragma once
#include <Modloader/app/structs/WaapiJsonProjectInfo_VersionInfo.h>
#include <Modloader/app/structs/WaapiJsonProjectInfo_VersionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonProjectInfo_VersionInfo {
        inline app::WaapiJsonProjectInfo_VersionInfo__Class** type_info() {
            static app::WaapiJsonProjectInfo_VersionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaapiJsonProjectInfo_VersionInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaapiJsonProjectInfo_VersionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::WaapiJsonProjectInfo_VersionInfo__Class>(type_info(), "", "WaapiJsonProjectInfo", "VersionInfo");
        }
        inline app::WaapiJsonProjectInfo_VersionInfo* create() {
            return il2cpp::create_object<app::WaapiJsonProjectInfo_VersionInfo>(get_class());
        }
    } // namespace WaapiJsonProjectInfo_VersionInfo
} // namespace app::classes::types

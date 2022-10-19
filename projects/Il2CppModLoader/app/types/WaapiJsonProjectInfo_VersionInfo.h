#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaapiJsonProjectInfo_VersionInfo {
        namespace {
            inline app::WaapiJsonProjectInfo_VersionInfo__Class* type_info_ref = nullptr;
        }
        inline app::WaapiJsonProjectInfo_VersionInfo__Class** type_info = &type_info_ref;
        inline app::WaapiJsonProjectInfo_VersionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::WaapiJsonProjectInfo_VersionInfo__Class>(type_info, "", "WaapiJsonProjectInfo", "VersionInfo");
        }
        inline app::WaapiJsonProjectInfo_VersionInfo* create() {
            return il2cpp::create_object<app::WaapiJsonProjectInfo_VersionInfo>(get_class());
        }
    } // namespace WaapiJsonProjectInfo_VersionInfo
} // namespace app::classes::types

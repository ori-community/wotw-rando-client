#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonProjectInfo_ProjectInfoDirectories {
        namespace {
            app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class* type_info_ref = nullptr;
        }
        app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class** type_info = &type_info_ref;
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class* get_class() {
            return il2cpp::get_nested_class<app::WaapiJsonProjectInfo_ProjectInfoDirectories__Class>(type_info, "", "WaapiJsonProjectInfo", "ProjectInfoDirectories");
        }
        inline app::WaapiJsonProjectInfo_ProjectInfoDirectories* create() {
            return il2cpp::create_object<app::WaapiJsonProjectInfo_ProjectInfoDirectories>(get_class());
        }
    } // namespace WaapiJsonProjectInfo_ProjectInfoDirectories
} // namespace app::classes::types

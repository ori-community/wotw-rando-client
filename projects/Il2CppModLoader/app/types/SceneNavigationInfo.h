#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneNavigationInfo {
        namespace {
            app::SceneNavigationInfo__Class* type_info_ref = nullptr;
        }
        app::SceneNavigationInfo__Class** type_info = &type_info_ref;
        inline app::SceneNavigationInfo__Class* get_class() {
            return il2cpp::get_class<app::SceneNavigationInfo__Class>(type_info, "", "SceneNavigationInfo");
        }
        inline app::SceneNavigationInfo* create() {
            return il2cpp::create_object<app::SceneNavigationInfo>(get_class());
        }
    } // namespace SceneNavigationInfo
} // namespace app::classes::types

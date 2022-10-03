#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnSceneStartRunAction {
        namespace {
            app::OnSceneStartRunAction__Class* type_info_ref = nullptr;
        }
        app::OnSceneStartRunAction__Class** type_info = &type_info_ref;
        inline app::OnSceneStartRunAction__Class* get_class() {
            return il2cpp::get_class<app::OnSceneStartRunAction__Class>(type_info, "", "OnSceneStartRunAction");
        }
        inline app::OnSceneStartRunAction* create() {
            return il2cpp::create_object<app::OnSceneStartRunAction>(get_class());
        }
    } // namespace OnSceneStartRunAction
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadSceneAction {
        namespace {
            app::LoadSceneAction__Class* type_info_ref = nullptr;
        }
        app::LoadSceneAction__Class** type_info = &type_info_ref;
        inline app::LoadSceneAction__Class* get_class() {
            return il2cpp::get_class<app::LoadSceneAction__Class>(type_info, "", "LoadSceneAction");
        }
        inline app::LoadSceneAction* create() {
            return il2cpp::create_object<app::LoadSceneAction>(get_class());
        }
    } // namespace LoadSceneAction
} // namespace app::classes::types

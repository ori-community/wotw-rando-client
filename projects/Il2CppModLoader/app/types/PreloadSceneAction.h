#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreloadSceneAction {
        namespace {
            inline app::PreloadSceneAction__Class* type_info_ref = nullptr;
        }
        inline app::PreloadSceneAction__Class** type_info = &type_info_ref;
        inline app::PreloadSceneAction__Class* get_class() {
            return il2cpp::get_class<app::PreloadSceneAction__Class>(type_info, "", "PreloadSceneAction");
        }
        inline app::PreloadSceneAction* create() {
            return il2cpp::create_object<app::PreloadSceneAction>(get_class());
        }
    } // namespace PreloadSceneAction
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericScenePosition {
        namespace {
            inline app::GenericScenePosition__Class* type_info_ref = nullptr;
        }
        inline app::GenericScenePosition__Class** type_info = &type_info_ref;
        inline app::GenericScenePosition__Class* get_class() {
            return il2cpp::get_class<app::GenericScenePosition__Class>(type_info, "Moon.SceneManagement", "GenericScenePosition");
        }
        inline app::GenericScenePosition* create() {
            return il2cpp::create_object<app::GenericScenePosition>(get_class());
        }
    } // namespace GenericScenePosition
} // namespace app::classes::types

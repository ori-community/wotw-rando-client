#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnloadSceneOptions__Enum {
        namespace {
            inline app::UnloadSceneOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnloadSceneOptions__Enum__Class** type_info = &type_info_ref;
        inline app::UnloadSceneOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::UnloadSceneOptions__Enum__Class>(type_info, "UnityEngine.SceneManagement", "UnloadSceneOptions");
        }
        inline app::UnloadSceneOptions__Enum* create() {
            return il2cpp::create_object<app::UnloadSceneOptions__Enum>(get_class());
        }
    } // namespace UnloadSceneOptions__Enum
} // namespace app::classes::types

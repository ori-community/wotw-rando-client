#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneModeManager_SceneModeOverride__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneModeManager_SceneModeOverride__Enum__Class** type_info;
        inline app::SceneModeManager_SceneModeOverride__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneModeManager_SceneModeOverride__Enum__Class>(type_info, "", "SceneModeManager", "SceneModeOverride");
        }
        inline app::SceneModeManager_SceneModeOverride__Enum* create() {
            return il2cpp::create_object<app::SceneModeManager_SceneModeOverride__Enum>(get_class());
        }
    } // namespace SceneModeManager_SceneModeOverride__Enum
} // namespace app::classes::types

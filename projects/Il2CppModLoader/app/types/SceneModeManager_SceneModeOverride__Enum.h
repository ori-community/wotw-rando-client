#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneModeManager_SceneModeOverride__Enum {
        inline app::SceneModeManager_SceneModeOverride__Enum__Class** type_info = (app::SceneModeManager_SceneModeOverride__Enum__Class**)(modloader::win::memory::resolve_rva(0x04799290));
        inline app::SceneModeManager_SceneModeOverride__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneModeManager_SceneModeOverride__Enum__Class>(type_info, "", "SceneModeManager", "SceneModeOverride");
        }
        inline app::SceneModeManager_SceneModeOverride__Enum* create() {
            return il2cpp::create_object<app::SceneModeManager_SceneModeOverride__Enum>(get_class());
        }
    } // namespace SceneModeManager_SceneModeOverride__Enum
} // namespace app::classes::types

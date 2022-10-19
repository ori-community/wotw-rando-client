#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapUI_WorldMapStates__Enum {
        namespace {
            inline app::GameMapUI_WorldMapStates__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GameMapUI_WorldMapStates__Enum__Class** type_info = &type_info_ref;
        inline app::GameMapUI_WorldMapStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapUI_WorldMapStates__Enum__Class>(type_info, "", "GameMapUI", "WorldMapStates");
        }
        inline app::GameMapUI_WorldMapStates__Enum* create() {
            return il2cpp::create_object<app::GameMapUI_WorldMapStates__Enum>(get_class());
        }
    } // namespace GameMapUI_WorldMapStates__Enum
} // namespace app::classes::types

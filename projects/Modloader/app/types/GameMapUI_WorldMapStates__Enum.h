#pragma once
#include <Modloader/app/structs/GameMapUI_WorldMapStates__Enum.h>
#include <Modloader/app/structs/GameMapUI_WorldMapStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameMapUI_WorldMapStates__Enum {
        inline app::GameMapUI_WorldMapStates__Enum__Class** type_info() {
            static app::GameMapUI_WorldMapStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameMapUI_WorldMapStates__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameMapUI_WorldMapStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapUI_WorldMapStates__Enum__Class>(type_info(), "", "GameMapUI", "WorldMapStates");
        }
        inline app::GameMapUI_WorldMapStates__Enum* create() {
            return il2cpp::create_object<app::GameMapUI_WorldMapStates__Enum>(get_class());
        }
    } // namespace GameMapUI_WorldMapStates__Enum
} // namespace app::classes::types

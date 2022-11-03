#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array {
        namespace {
            inline app::KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array__Class** type_info = &type_info_ref;
        inline app::KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array__Class>(type_info, "System.Collections.Generic", "KeyValuePair`2[GameMapPins+PinColour,GameMapPins+Pin][]");
        }
        inline app::KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array>(get_class());
        }
    } // namespace KeyValuePair_2_GameMapPins_PinColour_GameMapPins_Pin___Array
} // namespace app::classes::types

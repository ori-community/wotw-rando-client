#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapPins_PinColour__Enum {
        inline app::GameMapPins_PinColour__Enum__Class** type_info = (app::GameMapPins_PinColour__Enum__Class**)(modloader::win::memory::resolve_rva(0x04725A50));
        inline app::GameMapPins_PinColour__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapPins_PinColour__Enum__Class>(type_info, "", "GameMapPins", "PinColour");
        }
        inline app::GameMapPins_PinColour__Enum* create() {
            return il2cpp::create_object<app::GameMapPins_PinColour__Enum>(get_class());
        }
        inline app::GameMapPins_PinColour__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::GameMapPins_PinColour__Enum__Array>(get_class(), size);
        }
        inline app::GameMapPins_PinColour__Enum__Array* create_array(const std::vector<app::GameMapPins_PinColour__Enum*>& items) {
            return il2cpp::array_new<app::GameMapPins_PinColour__Enum__Array>(get_class(), items);
        }
    } // namespace GameMapPins_PinColour__Enum
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapPins_PinColour__Enum__Array {
        namespace {
            app::GameMapPins_PinColour__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::GameMapPins_PinColour__Enum__Array__Class** type_info = &type_info_ref;
        inline app::GameMapPins_PinColour__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::GameMapPins_PinColour__Enum__Array__Class>(type_info, "", "GameMapPins+PinColour[]");
        }
        inline app::GameMapPins_PinColour__Enum__Array* create() {
            return il2cpp::create_object<app::GameMapPins_PinColour__Enum__Array>(get_class());
        }
    } // namespace GameMapPins_PinColour__Enum__Array
} // namespace app::classes::types

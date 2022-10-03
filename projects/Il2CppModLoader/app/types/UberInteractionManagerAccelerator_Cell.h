#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator_Cell {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManagerAccelerator_Cell__Class** type_info;
        inline app::UberInteractionManagerAccelerator_Cell__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManagerAccelerator_Cell__Class>(type_info, "", "UberInteractionManagerAccelerator", "Cell");
        }
        inline app::UberInteractionManagerAccelerator_Cell* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator_Cell>(get_class());
        }
        inline app::UberInteractionManagerAccelerator_Cell__Array* create_array(int size) {
            return il2cpp::array_new<app::UberInteractionManagerAccelerator_Cell__Array>(get_class(), size);
        }
    } // namespace UberInteractionManagerAccelerator_Cell
} // namespace app::classes::types

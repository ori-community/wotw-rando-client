#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator_Cell__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManagerAccelerator_Cell__Array__Class** type_info;
        inline app::UberInteractionManagerAccelerator_Cell__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManagerAccelerator_Cell__Array__Class>(type_info, "", "UberInteractionManagerAccelerator+Cell[]");
        }
        inline app::UberInteractionManagerAccelerator_Cell__Array* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator_Cell__Array>(get_class());
        }
    } // namespace UberInteractionManagerAccelerator_Cell__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberInteractionManagerAccelerator_CellInteractionData__Array {
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Array__Class** type_info = (app::UberInteractionManagerAccelerator_CellInteractionData__Array__Class**)(modloader::win::memory::resolve_rva(0x04701470));
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Array__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManagerAccelerator_CellInteractionData__Array__Class>(type_info, "", "UberInteractionManagerAccelerator+CellInteractionData[]");
        }
        inline app::UberInteractionManagerAccelerator_CellInteractionData__Array* create() {
            return il2cpp::create_object<app::UberInteractionManagerAccelerator_CellInteractionData__Array>(get_class());
        }
    } // namespace UberInteractionManagerAccelerator_CellInteractionData__Array
} // namespace app::classes::types

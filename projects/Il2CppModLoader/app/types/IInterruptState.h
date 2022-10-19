#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInterruptState {
        inline app::IInterruptState__Class** type_info = (app::IInterruptState__Class**)(modloader::win::memory::resolve_rva(0x04773118));
        inline app::IInterruptState__Class* get_class() {
            return il2cpp::get_class<app::IInterruptState__Class>(type_info, "Moon.FSM", "IInterruptState");
        }
        inline app::IInterruptState__Array* create_array(int size) {
            return il2cpp::array_new<app::IInterruptState__Array>(get_class(), size);
        }
        inline app::IInterruptState__Array* create_array(const std::vector<app::IInterruptState*>& items) {
            return il2cpp::array_new<app::IInterruptState__Array>(get_class(), items);
        }
    } // namespace IInterruptState
} // namespace app::classes::types

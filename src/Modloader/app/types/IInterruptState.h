#pragma once
#include <Modloader/app/structs/IInterruptState.h>
#include <Modloader/app/structs/IInterruptState__Array.h>
#include <Modloader/app/structs/IInterruptState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInterruptState {
        inline app::IInterruptState__Class** type_info() {
            static app::IInterruptState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInterruptState__Class**)(modloader::win::memory::resolve_rva(0x04773118));
            }
            return cache;
        }
        inline app::IInterruptState__Class* get_class() {
            return il2cpp::get_class<app::IInterruptState__Class>(type_info(), "Moon.FSM", "IInterruptState");
        }
        inline app::IInterruptState__Array* create_array(int size) {
            return il2cpp::array_new<app::IInterruptState__Array>(get_class(), size);
        }
        inline app::IInterruptState__Array* create_array(const std::vector<app::IInterruptState*>& items) {
            return il2cpp::array_new<app::IInterruptState__Array>(get_class(), items);
        }
    } // namespace IInterruptState
} // namespace app::classes::types

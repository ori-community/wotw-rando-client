#pragma once
#include <Modloader/app/structs/IInterruptable.h>
#include <Modloader/app/structs/IInterruptable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInterruptable {
        inline app::IInterruptable__Class** type_info() {
            static app::IInterruptable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInterruptable__Class**)(modloader::win::memory::resolve_rva(0x04786B08));
            }
            return cache;
        }
        inline app::IInterruptable__Class* get_class() {
            return il2cpp::get_class<app::IInterruptable__Class>(type_info(), "Moon.FSM", "IInterruptable");
        }
    } // namespace IInterruptable
} // namespace app::classes::types

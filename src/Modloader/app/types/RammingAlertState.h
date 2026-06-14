#pragma once
#include <Modloader/app/structs/RammingAlertState.h>
#include <Modloader/app/structs/RammingAlertState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingAlertState {
        inline app::RammingAlertState__Class** type_info() {
            static app::RammingAlertState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingAlertState__Class**)(modloader::win::memory::resolve_rva(0x0470BA78));
            }
            return cache;
        }
        inline app::RammingAlertState__Class* get_class() {
            return il2cpp::get_class<app::RammingAlertState__Class>(type_info(), "", "RammingAlertState");
        }
        inline app::RammingAlertState* create() {
            return il2cpp::create_object<app::RammingAlertState>(get_class());
        }
    } // namespace RammingAlertState
} // namespace app::classes::types

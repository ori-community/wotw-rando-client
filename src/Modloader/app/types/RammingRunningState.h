#pragma once
#include <Modloader/app/structs/RammingRunningState.h>
#include <Modloader/app/structs/RammingRunningState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RammingRunningState {
        inline app::RammingRunningState__Class** type_info() {
            static app::RammingRunningState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RammingRunningState__Class**)(modloader::win::memory::resolve_rva(0x0475AC10));
            }
            return cache;
        }
        inline app::RammingRunningState__Class* get_class() {
            return il2cpp::get_class<app::RammingRunningState__Class>(type_info(), "", "RammingRunningState");
        }
        inline app::RammingRunningState* create() {
            return il2cpp::create_object<app::RammingRunningState>(get_class());
        }
    } // namespace RammingRunningState
} // namespace app::classes::types

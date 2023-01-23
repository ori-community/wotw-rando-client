#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingRunningState__Class.h>
#include <Modloader/app/structs/RammingRunningState.h>

namespace app::classes::types {
    namespace RammingRunningState {
        inline app::RammingRunningState__Class** type_info = (app::RammingRunningState__Class**)(modloader::win::memory::resolve_rva(0x0475AC10));
        inline app::RammingRunningState__Class* get_class() {
            return il2cpp::get_class<app::RammingRunningState__Class>(type_info, "", "RammingRunningState");
        }
        inline app::RammingRunningState* create() {
            return il2cpp::create_object<app::RammingRunningState>(get_class());
        }
    } // namespace RammingRunningState
} // namespace app::classes::types

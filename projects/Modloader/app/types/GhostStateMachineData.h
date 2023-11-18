#pragma once
#include <Modloader/app/structs/GhostStateMachineData.h>
#include <Modloader/app/structs/GhostStateMachineData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostStateMachineData {
        inline app::GhostStateMachineData__Class** type_info() {
            static app::GhostStateMachineData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostStateMachineData__Class**)(modloader::win::memory::resolve_rva(0x0477E240));
            }
            return cache;
        }
        inline app::GhostStateMachineData__Class* get_class() {
            return il2cpp::get_class<app::GhostStateMachineData__Class>(type_info(), "", "GhostStateMachineData");
        }
        inline app::GhostStateMachineData* create() {
            return il2cpp::create_object<app::GhostStateMachineData>(get_class());
        }
    } // namespace GhostStateMachineData
} // namespace app::classes::types

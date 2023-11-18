#pragma once
#include <Modloader/app/structs/IStateTransitionData.h>
#include <Modloader/app/structs/IStateTransitionData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IStateTransitionData {
        inline app::IStateTransitionData__Class** type_info() {
            static app::IStateTransitionData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IStateTransitionData__Class**)(modloader::win::memory::resolve_rva(0x04769A90));
            }
            return cache;
        }
        inline app::IStateTransitionData__Class* get_class() {
            return il2cpp::get_class<app::IStateTransitionData__Class>(type_info(), "", "IStateTransitionData");
        }
    } // namespace IStateTransitionData
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IStateTransitionData {
        inline app::IStateTransitionData__Class** type_info = (app::IStateTransitionData__Class**)(modloader::win::memory::resolve_rva(0x04769A90));
        inline app::IStateTransitionData__Class* get_class() {
            return il2cpp::get_class<app::IStateTransitionData__Class>(type_info, "", "IStateTransitionData");
        }
    } // namespace IStateTransitionData
} // namespace app::classes::types

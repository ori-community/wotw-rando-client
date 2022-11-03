#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionTrigger_Range__Array {
        inline app::InteractionTrigger_Range__Array__Class** type_info = (app::InteractionTrigger_Range__Array__Class**)(modloader::win::memory::resolve_rva(0x04769B48));
        inline app::InteractionTrigger_Range__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTrigger_Range__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger+Range[]");
        }
        inline app::InteractionTrigger_Range__Array* create() {
            return il2cpp::create_object<app::InteractionTrigger_Range__Array>(get_class());
        }
    } // namespace InteractionTrigger_Range__Array
} // namespace app::classes::types

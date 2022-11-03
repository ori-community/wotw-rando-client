#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBrainController {
        inline app::IBrainController__Class** type_info = (app::IBrainController__Class**)(modloader::win::memory::resolve_rva(0x047982A8));
        inline app::IBrainController__Class* get_class() {
            return il2cpp::get_class<app::IBrainController__Class>(type_info, "Moon", "IBrainController");
        }
    } // namespace IBrainController
} // namespace app::classes::types

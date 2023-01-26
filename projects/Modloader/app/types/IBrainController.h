#pragma once
#include <Modloader/app/structs/IBrainController.h>
#include <Modloader/app/structs/IBrainController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBrainController {
        inline app::IBrainController__Class** type_info() {
            static app::IBrainController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBrainController__Class**)(modloader::win::memory::resolve_rva(0x047982A8));
            }
            return cache;
        }
        inline app::IBrainController__Class* get_class() {
            return il2cpp::get_class<app::IBrainController__Class>(type_info(), "Moon", "IBrainController");
        }
    } // namespace IBrainController
} // namespace app::classes::types

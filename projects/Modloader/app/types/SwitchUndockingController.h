#pragma once
#include <Modloader/app/structs/SwitchUndockingController.h>
#include <Modloader/app/structs/SwitchUndockingController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchUndockingController {
        inline app::SwitchUndockingController__Class** type_info() {
            static app::SwitchUndockingController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwitchUndockingController__Class**)(modloader::win::memory::resolve_rva(0x0476AC88));
            }
            return cache;
        }
        inline app::SwitchUndockingController__Class* get_class() {
            return il2cpp::get_class<app::SwitchUndockingController__Class>(type_info(), "UberShader.optimizations.gc", "SwitchUndockingController");
        }
        inline app::SwitchUndockingController* create() {
            return il2cpp::create_object<app::SwitchUndockingController>(get_class());
        }
    } // namespace SwitchUndockingController
} // namespace app::classes::types

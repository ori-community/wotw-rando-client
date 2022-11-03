#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchUndockingController {
        inline app::SwitchUndockingController__Class** type_info = (app::SwitchUndockingController__Class**)(modloader::win::memory::resolve_rva(0x0476AC88));
        inline app::SwitchUndockingController__Class* get_class() {
            return il2cpp::get_class<app::SwitchUndockingController__Class>(type_info, "UberShader.optimizations.gc", "SwitchUndockingController");
        }
        inline app::SwitchUndockingController* create() {
            return il2cpp::create_object<app::SwitchUndockingController>(get_class());
        }
    } // namespace SwitchUndockingController
} // namespace app::classes::types

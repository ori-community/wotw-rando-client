#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchController {
        inline app::SwitchController__Class** type_info = (app::SwitchController__Class**)(modloader::win::memory::resolve_rva(0x04775EA0));
        inline app::SwitchController__Class* get_class() {
            return il2cpp::get_class<app::SwitchController__Class>(type_info, "frameworks.Switch", "SwitchController");
        }
        inline app::SwitchController* create() {
            return il2cpp::create_object<app::SwitchController>(get_class());
        }
    } // namespace SwitchController
} // namespace app::classes::types

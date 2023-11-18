#pragma once
#include <Modloader/app/structs/SwitchController.h>
#include <Modloader/app/structs/SwitchController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchController {
        inline app::SwitchController__Class** type_info() {
            static app::SwitchController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwitchController__Class**)(modloader::win::memory::resolve_rva(0x04775EA0));
            }
            return cache;
        }
        inline app::SwitchController__Class* get_class() {
            return il2cpp::get_class<app::SwitchController__Class>(type_info(), "frameworks.Switch", "SwitchController");
        }
        inline app::SwitchController* create() {
            return il2cpp::create_object<app::SwitchController>(get_class());
        }
    } // namespace SwitchController
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SwitchBoostController.h>
#include <Modloader/app/structs/SwitchBoostController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchBoostController {
        inline app::SwitchBoostController__Class** type_info() {
            static app::SwitchBoostController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwitchBoostController__Class**)(modloader::win::memory::resolve_rva(0x04749590));
            }
            return cache;
        }
        inline app::SwitchBoostController__Class* get_class() {
            return il2cpp::get_class<app::SwitchBoostController__Class>(type_info(), "frameworks.Switch", "SwitchBoostController");
        }
        inline app::SwitchBoostController* create() {
            return il2cpp::create_object<app::SwitchBoostController>(get_class());
        }
    } // namespace SwitchBoostController
} // namespace app::classes::types

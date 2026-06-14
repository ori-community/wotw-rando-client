#pragma once
#include <Modloader/app/structs/CameraPuppetController.h>
#include <Modloader/app/structs/CameraPuppetController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraPuppetController {
        inline app::CameraPuppetController__Class** type_info() {
            static app::CameraPuppetController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraPuppetController__Class**)(modloader::win::memory::resolve_rva(0x04773108));
            }
            return cache;
        }
        inline app::CameraPuppetController__Class* get_class() {
            return il2cpp::get_class<app::CameraPuppetController__Class>(type_info(), "", "CameraPuppetController");
        }
        inline app::CameraPuppetController* create() {
            return il2cpp::create_object<app::CameraPuppetController>(get_class());
        }
    } // namespace CameraPuppetController
} // namespace app::classes::types

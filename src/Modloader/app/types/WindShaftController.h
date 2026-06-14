#pragma once
#include <Modloader/app/structs/WindShaftController.h>
#include <Modloader/app/structs/WindShaftController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindShaftController {
        inline app::WindShaftController__Class** type_info() {
            static app::WindShaftController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WindShaftController__Class**)(modloader::win::memory::resolve_rva(0x0475ED20));
            }
            return cache;
        }
        inline app::WindShaftController__Class* get_class() {
            return il2cpp::get_class<app::WindShaftController__Class>(type_info(), "", "WindShaftController");
        }
        inline app::WindShaftController* create() {
            return il2cpp::create_object<app::WindShaftController>(get_class());
        }
    } // namespace WindShaftController
} // namespace app::classes::types

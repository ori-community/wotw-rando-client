#pragma once
#include <Modloader/app/structs/RigidbodyInteractionController.h>
#include <Modloader/app/structs/RigidbodyInteractionController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyInteractionController {
        inline app::RigidbodyInteractionController__Class** type_info() {
            static app::RigidbodyInteractionController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RigidbodyInteractionController__Class**)(modloader::win::memory::resolve_rva(0x04761630));
            }
            return cache;
        }
        inline app::RigidbodyInteractionController__Class* get_class() {
            return il2cpp::get_class<app::RigidbodyInteractionController__Class>(type_info(), "", "RigidbodyInteractionController");
        }
        inline app::RigidbodyInteractionController* create() {
            return il2cpp::create_object<app::RigidbodyInteractionController>(get_class());
        }
    } // namespace RigidbodyInteractionController
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/CreditsController.h>
#include <Modloader/app/structs/CreditsController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreditsController {
        inline app::CreditsController__Class** type_info() {
            static app::CreditsController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreditsController__Class**)(modloader::win::memory::resolve_rva(0x0476B3F8));
            }
            return cache;
        }
        inline app::CreditsController__Class* get_class() {
            return il2cpp::get_class<app::CreditsController__Class>(type_info(), "", "CreditsController");
        }
        inline app::CreditsController* create() {
            return il2cpp::create_object<app::CreditsController>(get_class());
        }
    } // namespace CreditsController
} // namespace app::classes::types

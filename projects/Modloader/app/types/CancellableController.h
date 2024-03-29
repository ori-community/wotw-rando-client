#pragma once
#include <Modloader/app/structs/CancellableController.h>
#include <Modloader/app/structs/CancellableController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancellableController {
        inline app::CancellableController__Class** type_info() {
            static app::CancellableController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancellableController__Class**)(modloader::win::memory::resolve_rva(0x0470B1D8));
            }
            return cache;
        }
        inline app::CancellableController__Class* get_class() {
            return il2cpp::get_class<app::CancellableController__Class>(type_info(), "", "CancellableController");
        }
        inline app::CancellableController* create() {
            return il2cpp::create_object<app::CancellableController>(get_class());
        }
    } // namespace CancellableController
} // namespace app::classes::types

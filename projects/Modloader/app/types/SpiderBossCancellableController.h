#pragma once
#include <Modloader/app/structs/SpiderBossCancellableController.h>
#include <Modloader/app/structs/SpiderBossCancellableController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossCancellableController {
        inline app::SpiderBossCancellableController__Class** type_info() {
            static app::SpiderBossCancellableController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBossCancellableController__Class**)(modloader::win::memory::resolve_rva(0x04792620));
            }
            return cache;
        }
        inline app::SpiderBossCancellableController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossCancellableController__Class>(type_info(), "", "SpiderBossCancellableController");
        }
        inline app::SpiderBossCancellableController* create() {
            return il2cpp::create_object<app::SpiderBossCancellableController>(get_class());
        }
    } // namespace SpiderBossCancellableController
} // namespace app::classes::types

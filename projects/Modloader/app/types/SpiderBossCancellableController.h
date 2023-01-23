#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossCancellableController__Class.h>
#include <Modloader/app/structs/SpiderBossCancellableController.h>

namespace app::classes::types {
    namespace SpiderBossCancellableController {
        inline app::SpiderBossCancellableController__Class** type_info = (app::SpiderBossCancellableController__Class**)(modloader::win::memory::resolve_rva(0x04792620));
        inline app::SpiderBossCancellableController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossCancellableController__Class>(type_info, "", "SpiderBossCancellableController");
        }
        inline app::SpiderBossCancellableController* create() {
            return il2cpp::create_object<app::SpiderBossCancellableController>(get_class());
        }
    } // namespace SpiderBossCancellableController
} // namespace app::classes::types

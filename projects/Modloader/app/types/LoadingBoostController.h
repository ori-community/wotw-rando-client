#pragma once
#include <Modloader/app/structs/LoadingBoostController.h>
#include <Modloader/app/structs/LoadingBoostController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadingBoostController {
        inline app::LoadingBoostController__Class** type_info() {
            static app::LoadingBoostController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadingBoostController__Class**)(modloader::win::memory::resolve_rva(0x047556E8));
            }
            return cache;
        }
        inline app::LoadingBoostController__Class* get_class() {
            return il2cpp::get_class<app::LoadingBoostController__Class>(type_info(), "", "LoadingBoostController");
        }
        inline app::LoadingBoostController* create() {
            return il2cpp::create_object<app::LoadingBoostController>(get_class());
        }
    } // namespace LoadingBoostController
} // namespace app::classes::types

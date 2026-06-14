#pragma once
#include <Modloader/app/structs/InstantLoadScenesController.h>
#include <Modloader/app/structs/InstantLoadScenesController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantLoadScenesController {
        inline app::InstantLoadScenesController__Class** type_info() {
            static app::InstantLoadScenesController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InstantLoadScenesController__Class**)(modloader::win::memory::resolve_rva(0x0471CD28));
            }
            return cache;
        }
        inline app::InstantLoadScenesController__Class* get_class() {
            return il2cpp::get_class<app::InstantLoadScenesController__Class>(type_info(), "", "InstantLoadScenesController");
        }
        inline app::InstantLoadScenesController* create() {
            return il2cpp::create_object<app::InstantLoadScenesController>(get_class());
        }
    } // namespace InstantLoadScenesController
} // namespace app::classes::types

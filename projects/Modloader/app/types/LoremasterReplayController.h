#pragma once
#include <Modloader/app/structs/LoremasterReplayController.h>
#include <Modloader/app/structs/LoremasterReplayController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoremasterReplayController {
        inline app::LoremasterReplayController__Class** type_info() {
            static app::LoremasterReplayController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoremasterReplayController__Class**)(modloader::win::memory::resolve_rva(0x0470A6A8));
            }
            return cache;
        }
        inline app::LoremasterReplayController__Class* get_class() {
            return il2cpp::get_class<app::LoremasterReplayController__Class>(type_info(), "", "LoremasterReplayController");
        }
        inline app::LoremasterReplayController* create() {
            return il2cpp::create_object<app::LoremasterReplayController>(get_class());
        }
    } // namespace LoremasterReplayController
} // namespace app::classes::types

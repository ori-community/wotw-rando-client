#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoremasterReplayController {
        inline app::LoremasterReplayController__Class** type_info = (app::LoremasterReplayController__Class**)(modloader::win::memory::resolve_rva(0x0470A6A8));
        inline app::LoremasterReplayController__Class* get_class() {
            return il2cpp::get_class<app::LoremasterReplayController__Class>(type_info, "", "LoremasterReplayController");
        }
        inline app::LoremasterReplayController* create() {
            return il2cpp::create_object<app::LoremasterReplayController>(get_class());
        }
    } // namespace LoremasterReplayController
} // namespace app::classes::types

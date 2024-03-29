#pragma once
#include <Modloader/app/structs/LoremasterReplayController_c_DisplayClass48_0.h>
#include <Modloader/app/structs/LoremasterReplayController_c_DisplayClass48_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoremasterReplayController_c_DisplayClass48_0 {
        inline app::LoremasterReplayController_c_DisplayClass48_0__Class** type_info() {
            static app::LoremasterReplayController_c_DisplayClass48_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoremasterReplayController_c_DisplayClass48_0__Class**)(modloader::win::memory::resolve_rva(0x04781020));
            }
            return cache;
        }
        inline app::LoremasterReplayController_c_DisplayClass48_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LoremasterReplayController_c_DisplayClass48_0__Class>(type_info(), "", "LoremasterReplayController", "<>c__DisplayClass48_0");
        }
        inline app::LoremasterReplayController_c_DisplayClass48_0* create() {
            return il2cpp::create_object<app::LoremasterReplayController_c_DisplayClass48_0>(get_class());
        }
    } // namespace LoremasterReplayController_c_DisplayClass48_0
} // namespace app::classes::types

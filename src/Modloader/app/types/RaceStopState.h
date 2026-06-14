#pragma once
#include <Modloader/app/structs/RaceStopState.h>
#include <Modloader/app/structs/RaceStopState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStopState {
        inline app::RaceStopState__Class** type_info() {
            static app::RaceStopState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceStopState__Class**)(modloader::win::memory::resolve_rva(0x0476CF38));
            }
            return cache;
        }
        inline app::RaceStopState__Class* get_class() {
            return il2cpp::get_class<app::RaceStopState__Class>(type_info(), "", "RaceStopState");
        }
        inline app::RaceStopState* create() {
            return il2cpp::create_object<app::RaceStopState>(get_class());
        }
    } // namespace RaceStopState
} // namespace app::classes::types

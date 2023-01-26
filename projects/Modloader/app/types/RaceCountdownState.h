#pragma once
#include <Modloader/app/structs/RaceCountdownState.h>
#include <Modloader/app/structs/RaceCountdownState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceCountdownState {
        inline app::RaceCountdownState__Class** type_info() {
            static app::RaceCountdownState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceCountdownState__Class**)(modloader::win::memory::resolve_rva(0x04710050));
            }
            return cache;
        }
        inline app::RaceCountdownState__Class* get_class() {
            return il2cpp::get_class<app::RaceCountdownState__Class>(type_info(), "", "RaceCountdownState");
        }
        inline app::RaceCountdownState* create() {
            return il2cpp::create_object<app::RaceCountdownState>(get_class());
        }
    } // namespace RaceCountdownState
} // namespace app::classes::types

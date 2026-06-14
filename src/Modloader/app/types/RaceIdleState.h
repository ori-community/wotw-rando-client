#pragma once
#include <Modloader/app/structs/RaceIdleState.h>
#include <Modloader/app/structs/RaceIdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceIdleState {
        inline app::RaceIdleState__Class** type_info() {
            static app::RaceIdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceIdleState__Class**)(modloader::win::memory::resolve_rva(0x047748C8));
            }
            return cache;
        }
        inline app::RaceIdleState__Class* get_class() {
            return il2cpp::get_class<app::RaceIdleState__Class>(type_info(), "", "RaceIdleState");
        }
        inline app::RaceIdleState* create() {
            return il2cpp::create_object<app::RaceIdleState>(get_class());
        }
    } // namespace RaceIdleState
} // namespace app::classes::types

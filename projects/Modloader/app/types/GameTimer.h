#pragma once
#include <Modloader/app/structs/GameTimer.h>
#include <Modloader/app/structs/GameTimer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameTimer {
        inline app::GameTimer__Class** type_info() {
            static app::GameTimer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameTimer__Class**)(modloader::win::memory::resolve_rva(0x0476FCF8));
            }
            return cache;
        }
        inline app::GameTimer__Class* get_class() {
            return il2cpp::get_class<app::GameTimer__Class>(type_info(), "", "GameTimer");
        }
        inline app::GameTimer* create() {
            return il2cpp::create_object<app::GameTimer>(get_class());
        }
    } // namespace GameTimer
} // namespace app::classes::types

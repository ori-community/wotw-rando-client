#pragma once
#include <Modloader/app/structs/RaceTimer.h>
#include <Modloader/app/structs/RaceTimer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceTimer {
        inline app::RaceTimer__Class** type_info() {
            static app::RaceTimer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceTimer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceTimer__Class* get_class() {
            return il2cpp::get_class<app::RaceTimer__Class>(type_info(), "", "RaceTimer");
        }
        inline app::RaceTimer* create() {
            return il2cpp::create_object<app::RaceTimer>(get_class());
        }
    } // namespace RaceTimer
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ColosseumTimer.h>
#include <Modloader/app/structs/ColosseumTimer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColosseumTimer {
        inline app::ColosseumTimer__Class** type_info() {
            static app::ColosseumTimer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColosseumTimer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColosseumTimer__Class* get_class() {
            return il2cpp::get_class<app::ColosseumTimer__Class>(type_info(), "", "ColosseumTimer");
        }
        inline app::ColosseumTimer* create() {
            return il2cpp::create_object<app::ColosseumTimer>(get_class());
        }
    } // namespace ColosseumTimer
} // namespace app::classes::types

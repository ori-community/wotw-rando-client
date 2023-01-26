#pragma once
#include <Modloader/app/structs/SnapTrapEatCounter.h>
#include <Modloader/app/structs/SnapTrapEatCounter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SnapTrapEatCounter {
        inline app::SnapTrapEatCounter__Class** type_info() {
            static app::SnapTrapEatCounter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SnapTrapEatCounter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SnapTrapEatCounter__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapEatCounter__Class>(type_info(), "", "SnapTrapEatCounter");
        }
        inline app::SnapTrapEatCounter* create() {
            return il2cpp::create_object<app::SnapTrapEatCounter>(get_class());
        }
    } // namespace SnapTrapEatCounter
} // namespace app::classes::types

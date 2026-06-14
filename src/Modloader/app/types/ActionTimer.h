#pragma once
#include <Modloader/app/structs/ActionTimer.h>
#include <Modloader/app/structs/ActionTimer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionTimer {
        inline app::ActionTimer__Class** type_info() {
            static app::ActionTimer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionTimer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionTimer__Class* get_class() {
            return il2cpp::get_class<app::ActionTimer__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ActionTimer");
        }
        inline app::ActionTimer* create() {
            return il2cpp::create_object<app::ActionTimer>(get_class());
        }
    } // namespace ActionTimer
} // namespace app::classes::types

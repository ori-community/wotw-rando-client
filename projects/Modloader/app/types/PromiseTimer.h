#pragma once
#include <Modloader/app/structs/PromiseTimer.h>
#include <Modloader/app/structs/PromiseTimer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PromiseTimer {
        inline app::PromiseTimer__Class** type_info() {
            static app::PromiseTimer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PromiseTimer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PromiseTimer__Class* get_class() {
            return il2cpp::get_class<app::PromiseTimer__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PromiseTimer");
        }
        inline app::PromiseTimer* create() {
            return il2cpp::create_object<app::PromiseTimer>(get_class());
        }
    } // namespace PromiseTimer
} // namespace app::classes::types

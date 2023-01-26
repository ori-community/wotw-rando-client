#pragma once
#include <Modloader/app/structs/SpiderIdle.h>
#include <Modloader/app/structs/SpiderIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderIdle {
        inline app::SpiderIdle__Class** type_info() {
            static app::SpiderIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderIdle__Class* get_class() {
            return il2cpp::get_class<app::SpiderIdle__Class>(type_info(), "", "SpiderIdle");
        }
        inline app::SpiderIdle* create() {
            return il2cpp::create_object<app::SpiderIdle>(get_class());
        }
    } // namespace SpiderIdle
} // namespace app::classes::types

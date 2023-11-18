#pragma once
#include <Modloader/app/structs/BaurIdle.h>
#include <Modloader/app/structs/BaurIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaurIdle {
        inline app::BaurIdle__Class** type_info() {
            static app::BaurIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaurIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaurIdle__Class* get_class() {
            return il2cpp::get_class<app::BaurIdle__Class>(type_info(), "", "BaurIdle");
        }
        inline app::BaurIdle* create() {
            return il2cpp::create_object<app::BaurIdle>(get_class());
        }
    } // namespace BaurIdle
} // namespace app::classes::types

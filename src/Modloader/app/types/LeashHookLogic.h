#pragma once
#include <Modloader/app/structs/LeashHookLogic.h>
#include <Modloader/app/structs/LeashHookLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeashHookLogic {
        inline app::LeashHookLogic__Class** type_info() {
            static app::LeashHookLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeashHookLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeashHookLogic__Class* get_class() {
            return il2cpp::get_class<app::LeashHookLogic__Class>(type_info(), "", "LeashHookLogic");
        }
        inline app::LeashHookLogic* create() {
            return il2cpp::create_object<app::LeashHookLogic>(get_class());
        }
    } // namespace LeashHookLogic
} // namespace app::classes::types

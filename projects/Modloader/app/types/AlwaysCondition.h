#pragma once
#include <Modloader/app/structs/AlwaysCondition.h>
#include <Modloader/app/structs/AlwaysCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AlwaysCondition {
        inline app::AlwaysCondition__Class** type_info() {
            static app::AlwaysCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AlwaysCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AlwaysCondition__Class* get_class() {
            return il2cpp::get_class<app::AlwaysCondition__Class>(type_info(), "fsm", "AlwaysCondition");
        }
        inline app::AlwaysCondition* create() {
            return il2cpp::create_object<app::AlwaysCondition>(get_class());
        }
    } // namespace AlwaysCondition
} // namespace app::classes::types

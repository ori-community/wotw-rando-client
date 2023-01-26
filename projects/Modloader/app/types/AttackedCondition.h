#pragma once
#include <Modloader/app/structs/AttackedCondition.h>
#include <Modloader/app/structs/AttackedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackedCondition {
        inline app::AttackedCondition__Class** type_info() {
            static app::AttackedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackedCondition__Class* get_class() {
            return il2cpp::get_class<app::AttackedCondition__Class>(type_info(), "", "AttackedCondition");
        }
        inline app::AttackedCondition* create() {
            return il2cpp::create_object<app::AttackedCondition>(get_class());
        }
    } // namespace AttackedCondition
} // namespace app::classes::types

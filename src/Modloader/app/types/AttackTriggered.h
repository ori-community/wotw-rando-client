#pragma once
#include <Modloader/app/structs/AttackTriggered.h>
#include <Modloader/app/structs/AttackTriggered__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackTriggered {
        inline app::AttackTriggered__Class** type_info() {
            static app::AttackTriggered__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackTriggered__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackTriggered__Class* get_class() {
            return il2cpp::get_class<app::AttackTriggered__Class>(type_info(), "", "AttackTriggered");
        }
        inline app::AttackTriggered* create() {
            return il2cpp::create_object<app::AttackTriggered>(get_class());
        }
    } // namespace AttackTriggered
} // namespace app::classes::types

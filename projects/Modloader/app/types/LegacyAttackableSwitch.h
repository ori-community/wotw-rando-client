#pragma once
#include <Modloader/app/structs/LegacyAttackableSwitch.h>
#include <Modloader/app/structs/LegacyAttackableSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyAttackableSwitch {
        inline app::LegacyAttackableSwitch__Class** type_info() {
            static app::LegacyAttackableSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyAttackableSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyAttackableSwitch__Class* get_class() {
            return il2cpp::get_class<app::LegacyAttackableSwitch__Class>(type_info(), "", "LegacyAttackableSwitch");
        }
        inline app::LegacyAttackableSwitch* create() {
            return il2cpp::create_object<app::LegacyAttackableSwitch>(get_class());
        }
    } // namespace LegacyAttackableSwitch
} // namespace app::classes::types

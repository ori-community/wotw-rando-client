#pragma once
#include <Modloader/app/structs/LizardKamikazeAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/LizardKamikazeAttackBehaviour_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardKamikazeAttackBehaviour_State__Enum {
        inline app::LizardKamikazeAttackBehaviour_State__Enum__Class** type_info() {
            static app::LizardKamikazeAttackBehaviour_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardKamikazeAttackBehaviour_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardKamikazeAttackBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardKamikazeAttackBehaviour_State__Enum__Class>(type_info(), "Moon", "LizardKamikazeAttackBehaviour", "State");
        }
        inline app::LizardKamikazeAttackBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::LizardKamikazeAttackBehaviour_State__Enum>(get_class());
        }
    } // namespace LizardKamikazeAttackBehaviour_State__Enum
} // namespace app::classes::types

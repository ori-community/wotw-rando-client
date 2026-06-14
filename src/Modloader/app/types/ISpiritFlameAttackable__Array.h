#pragma once
#include <Modloader/app/structs/ISpiritFlameAttackable__Array.h>
#include <Modloader/app/structs/ISpiritFlameAttackable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISpiritFlameAttackable__Array {
        inline app::ISpiritFlameAttackable__Array__Class** type_info() {
            static app::ISpiritFlameAttackable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISpiritFlameAttackable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISpiritFlameAttackable__Array__Class* get_class() {
            return il2cpp::get_class<app::ISpiritFlameAttackable__Array__Class>(type_info(), "", "ISpiritFlameAttackable[]");
        }
        inline app::ISpiritFlameAttackable__Array* create() {
            return il2cpp::create_object<app::ISpiritFlameAttackable__Array>(get_class());
        }
    } // namespace ISpiritFlameAttackable__Array
} // namespace app::classes::types

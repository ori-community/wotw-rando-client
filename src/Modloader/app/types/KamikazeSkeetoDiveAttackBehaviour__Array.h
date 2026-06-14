#pragma once
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour__Array.h>
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSkeetoDiveAttackBehaviour__Array {
        inline app::KamikazeSkeetoDiveAttackBehaviour__Array__Class** type_info() {
            static app::KamikazeSkeetoDiveAttackBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSkeetoDiveAttackBehaviour__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSkeetoDiveAttackBehaviour__Array__Class>(type_info(), "", "KamikazeSkeetoDiveAttackBehaviour[]");
        }
        inline app::KamikazeSkeetoDiveAttackBehaviour__Array* create() {
            return il2cpp::create_object<app::KamikazeSkeetoDiveAttackBehaviour__Array>(get_class());
        }
    } // namespace KamikazeSkeetoDiveAttackBehaviour__Array
} // namespace app::classes::types

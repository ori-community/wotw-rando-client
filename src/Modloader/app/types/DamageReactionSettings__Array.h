#pragma once
#include <Modloader/app/structs/DamageReactionSettings__Array.h>
#include <Modloader/app/structs/DamageReactionSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReactionSettings__Array {
        inline app::DamageReactionSettings__Array__Class** type_info() {
            static app::DamageReactionSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageReactionSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageReactionSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageReactionSettings__Array__Class>(type_info(), "", "DamageReactionSettings[]");
        }
        inline app::DamageReactionSettings__Array* create() {
            return il2cpp::create_object<app::DamageReactionSettings__Array>(get_class());
        }
    } // namespace DamageReactionSettings__Array
} // namespace app::classes::types

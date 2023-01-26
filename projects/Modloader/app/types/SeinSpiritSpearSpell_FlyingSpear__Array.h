#pragma once
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Array.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell_FlyingSpear__Array {
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array__Class** type_info() {
            static app::SeinSpiritSpearSpell_FlyingSpear__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritSpearSpell_FlyingSpear__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpell_FlyingSpear__Array__Class>(type_info(), "", "SeinSpiritSpearSpell+FlyingSpear[]");
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell_FlyingSpear__Array>(get_class());
        }
    } // namespace SeinSpiritSpearSpell_FlyingSpear__Array
} // namespace app::classes::types

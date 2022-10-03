#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell_FlyingSpear {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSpiritSpearSpell_FlyingSpear__Class** type_info;
        inline app::SeinSpiritSpearSpell_FlyingSpear__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritSpearSpell_FlyingSpear__Class>(type_info, "", "SeinSpiritSpearSpell", "FlyingSpear");
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell_FlyingSpear>(get_class());
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Boxed* box(app::SeinSpiritSpearSpell_FlyingSpear value) {
            return il2cpp::box_value<app::SeinSpiritSpearSpell_FlyingSpear__Boxed>(get_class(), value);
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinSpiritSpearSpell_FlyingSpear__Array>(get_class(), size);
        }
    } // namespace SeinSpiritSpearSpell_FlyingSpear
} // namespace app::classes::types

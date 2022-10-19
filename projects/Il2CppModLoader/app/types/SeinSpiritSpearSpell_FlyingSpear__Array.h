#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell_FlyingSpear__Array {
        namespace {
            inline app::SeinSpiritSpearSpell_FlyingSpear__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array__Class** type_info = &type_info_ref;
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpell_FlyingSpear__Array__Class>(type_info, "", "SeinSpiritSpearSpell+FlyingSpear[]");
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell_FlyingSpear__Array>(get_class());
        }
    } // namespace SeinSpiritSpearSpell_FlyingSpear__Array
} // namespace app::classes::types

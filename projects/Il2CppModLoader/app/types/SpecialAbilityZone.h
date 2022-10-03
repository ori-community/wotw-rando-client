#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpecialAbilityZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpecialAbilityZone__Class** type_info;
        inline app::SpecialAbilityZone__Class* get_class() {
            return il2cpp::get_class<app::SpecialAbilityZone__Class>(type_info, "", "SpecialAbilityZone");
        }
        inline app::SpecialAbilityZone* create() {
            return il2cpp::create_object<app::SpecialAbilityZone>(get_class());
        }
        inline app::SpecialAbilityZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SpecialAbilityZone__Array>(get_class(), size);
        }
    } // namespace SpecialAbilityZone
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageTypeSoundPair {
        namespace {
            inline app::DamageTypeSoundPair__Class* type_info_ref = nullptr;
        }
        inline app::DamageTypeSoundPair__Class** type_info = &type_info_ref;
        inline app::DamageTypeSoundPair__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeSoundPair__Class>(type_info, "", "DamageTypeSoundPair");
        }
        inline app::DamageTypeSoundPair* create() {
            return il2cpp::create_object<app::DamageTypeSoundPair>(get_class());
        }
        inline app::DamageTypeSoundPair__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageTypeSoundPair__Array>(get_class(), size);
        }
        inline app::DamageTypeSoundPair__Array* create_array(const std::vector<app::DamageTypeSoundPair*>& items) {
            return il2cpp::array_new<app::DamageTypeSoundPair__Array>(get_class(), items);
        }
    } // namespace DamageTypeSoundPair
} // namespace app::classes::types

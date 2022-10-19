#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageTypeEffectPair {
        namespace {
            inline app::DamageTypeEffectPair__Class* type_info_ref = nullptr;
        }
        inline app::DamageTypeEffectPair__Class** type_info = &type_info_ref;
        inline app::DamageTypeEffectPair__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeEffectPair__Class>(type_info, "", "DamageTypeEffectPair");
        }
        inline app::DamageTypeEffectPair* create() {
            return il2cpp::create_object<app::DamageTypeEffectPair>(get_class());
        }
    } // namespace DamageTypeEffectPair
} // namespace app::classes::types

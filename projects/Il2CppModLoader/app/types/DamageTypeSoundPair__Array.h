#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageTypeSoundPair__Array {
        namespace {
            inline app::DamageTypeSoundPair__Array__Class* type_info_ref = nullptr;
        }
        inline app::DamageTypeSoundPair__Array__Class** type_info = &type_info_ref;
        inline app::DamageTypeSoundPair__Array__Class* get_class() {
            return il2cpp::get_class<app::DamageTypeSoundPair__Array__Class>(type_info, "", "DamageTypeSoundPair[]");
        }
        inline app::DamageTypeSoundPair__Array* create() {
            return il2cpp::create_object<app::DamageTypeSoundPair__Array>(get_class());
        }
    } // namespace DamageTypeSoundPair__Array
} // namespace app::classes::types

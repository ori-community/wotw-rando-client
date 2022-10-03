#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BossHealthbar2_BossNameType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BossHealthbar2_BossNameType__Enum__Class** type_info;
        inline app::BossHealthbar2_BossNameType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BossHealthbar2_BossNameType__Enum__Class>(type_info, "", "BossHealthbar2", "BossNameType");
        }
        inline app::BossHealthbar2_BossNameType__Enum* create() {
            return il2cpp::create_object<app::BossHealthbar2_BossNameType__Enum>(get_class());
        }
    } // namespace BossHealthbar2_BossNameType__Enum
} // namespace app::classes::types

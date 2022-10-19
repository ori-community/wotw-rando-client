#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BossHealthbar2_BossNameType__Enum {
        inline app::BossHealthbar2_BossNameType__Enum__Class** type_info = (app::BossHealthbar2_BossNameType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476B578));
        inline app::BossHealthbar2_BossNameType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BossHealthbar2_BossNameType__Enum__Class>(type_info, "", "BossHealthbar2", "BossNameType");
        }
        inline app::BossHealthbar2_BossNameType__Enum* create() {
            return il2cpp::create_object<app::BossHealthbar2_BossNameType__Enum>(get_class());
        }
    } // namespace BossHealthbar2_BossNameType__Enum
} // namespace app::classes::types

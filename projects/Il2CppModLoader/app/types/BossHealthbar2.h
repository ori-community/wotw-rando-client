#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BossHealthbar2 {
        inline app::BossHealthbar2__Class** type_info = (app::BossHealthbar2__Class**)(modloader::win::memory::resolve_rva(0x04771768));
        inline app::BossHealthbar2__Class* get_class() {
            return il2cpp::get_class<app::BossHealthbar2__Class>(type_info, "", "BossHealthbar2");
        }
        inline app::BossHealthbar2* create() {
            return il2cpp::create_object<app::BossHealthbar2>(get_class());
        }
    } // namespace BossHealthbar2
} // namespace app::classes::types

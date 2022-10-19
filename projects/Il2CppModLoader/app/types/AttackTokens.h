#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttackTokens {
        inline app::AttackTokens__Class** type_info = (app::AttackTokens__Class**)(modloader::win::memory::resolve_rva(0x04754A80));
        inline app::AttackTokens__Class* get_class() {
            return il2cpp::get_class<app::AttackTokens__Class>(type_info, "", "AttackTokens");
        }
        inline app::AttackTokens* create() {
            return il2cpp::create_object<app::AttackTokens>(get_class());
        }
    } // namespace AttackTokens
} // namespace app::classes::types

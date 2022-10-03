#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScopeN {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScopeN__Class** type_info;
        inline app::ScopeN__Class* get_class() {
            return il2cpp::get_class<app::ScopeN__Class>(type_info, "System.Linq.Expressions", "ScopeN");
        }
        inline app::ScopeN* create() {
            return il2cpp::create_object<app::ScopeN>(get_class());
        }
    } // namespace ScopeN
} // namespace app::classes::types

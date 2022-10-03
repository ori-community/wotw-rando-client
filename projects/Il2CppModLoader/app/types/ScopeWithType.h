#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScopeWithType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScopeWithType__Class** type_info;
        inline app::ScopeWithType__Class* get_class() {
            return il2cpp::get_class<app::ScopeWithType__Class>(type_info, "System.Linq.Expressions", "ScopeWithType");
        }
        inline app::ScopeWithType* create() {
            return il2cpp::create_object<app::ScopeWithType>(get_class());
        }
    } // namespace ScopeWithType
} // namespace app::classes::types

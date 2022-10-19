#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScopeWithType {
        inline app::ScopeWithType__Class** type_info = (app::ScopeWithType__Class**)(modloader::win::memory::resolve_rva(0x0477F758));
        inline app::ScopeWithType__Class* get_class() {
            return il2cpp::get_class<app::ScopeWithType__Class>(type_info, "System.Linq.Expressions", "ScopeWithType");
        }
        inline app::ScopeWithType* create() {
            return il2cpp::create_object<app::ScopeWithType>(get_class());
        }
    } // namespace ScopeWithType
} // namespace app::classes::types

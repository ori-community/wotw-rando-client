#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompiledIdentityConstraint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompiledIdentityConstraint__Array__Class** type_info;
        inline app::CompiledIdentityConstraint__Array__Class* get_class() {
            return il2cpp::get_class<app::CompiledIdentityConstraint__Array__Class>(type_info, "System.Xml.Schema", "CompiledIdentityConstraint[]");
        }
        inline app::CompiledIdentityConstraint__Array* create() {
            return il2cpp::create_object<app::CompiledIdentityConstraint__Array>(get_class());
        }
    } // namespace CompiledIdentityConstraint__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompiledIdentityConstraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompiledIdentityConstraint__Class** type_info;
        inline app::CompiledIdentityConstraint__Class* get_class() {
            return il2cpp::get_class<app::CompiledIdentityConstraint__Class>(type_info, "System.Xml.Schema", "CompiledIdentityConstraint");
        }
        inline app::CompiledIdentityConstraint* create() {
            return il2cpp::create_object<app::CompiledIdentityConstraint>(get_class());
        }
        inline app::CompiledIdentityConstraint__Array* create_array(int size) {
            return il2cpp::array_new<app::CompiledIdentityConstraint__Array>(get_class(), size);
        }
        inline app::CompiledIdentityConstraint__Array* create_array(const std::vector<app::CompiledIdentityConstraint*>& items) {
            return il2cpp::array_new<app::CompiledIdentityConstraint__Array>(get_class(), items);
        }
    } // namespace CompiledIdentityConstraint
} // namespace app::classes::types

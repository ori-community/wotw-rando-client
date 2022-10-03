#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyBuilder {
        namespace {
            app::AssemblyBuilder__Class* type_info_ref = nullptr;
        }
        app::AssemblyBuilder__Class** type_info = &type_info_ref;
        inline app::AssemblyBuilder__Class* get_class() {
            return il2cpp::get_class<app::AssemblyBuilder__Class>(type_info, "System.Reflection.Emit", "AssemblyBuilder");
        }
        inline app::AssemblyBuilder* create() {
            return il2cpp::create_object<app::AssemblyBuilder>(get_class());
        }
    } // namespace AssemblyBuilder
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyFileVersionAttribute {
        namespace {
            app::AssemblyFileVersionAttribute__Class* type_info_ref = nullptr;
        }
        app::AssemblyFileVersionAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyFileVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyFileVersionAttribute__Class>(type_info, "System.Reflection", "AssemblyFileVersionAttribute");
        }
        inline app::AssemblyFileVersionAttribute* create() {
            return il2cpp::create_object<app::AssemblyFileVersionAttribute>(get_class());
        }
    } // namespace AssemblyFileVersionAttribute
} // namespace app::classes::types

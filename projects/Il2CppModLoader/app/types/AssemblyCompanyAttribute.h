#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyCompanyAttribute {
        namespace {
            inline app::AssemblyCompanyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyCompanyAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyCompanyAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyCompanyAttribute__Class>(type_info, "System.Reflection", "AssemblyCompanyAttribute");
        }
        inline app::AssemblyCompanyAttribute* create() {
            return il2cpp::create_object<app::AssemblyCompanyAttribute>(get_class());
        }
    } // namespace AssemblyCompanyAttribute
} // namespace app::classes::types

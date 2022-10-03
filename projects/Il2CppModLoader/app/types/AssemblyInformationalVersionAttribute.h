#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyInformationalVersionAttribute {
        namespace {
            app::AssemblyInformationalVersionAttribute__Class* type_info_ref = nullptr;
        }
        app::AssemblyInformationalVersionAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyInformationalVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyInformationalVersionAttribute__Class>(type_info, "System.Reflection", "AssemblyInformationalVersionAttribute");
        }
        inline app::AssemblyInformationalVersionAttribute* create() {
            return il2cpp::create_object<app::AssemblyInformationalVersionAttribute>(get_class());
        }
    } // namespace AssemblyInformationalVersionAttribute
} // namespace app::classes::types

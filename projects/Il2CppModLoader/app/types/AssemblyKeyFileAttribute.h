#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyKeyFileAttribute {
        namespace {
            app::AssemblyKeyFileAttribute__Class* type_info_ref = nullptr;
        }
        app::AssemblyKeyFileAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyKeyFileAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyKeyFileAttribute__Class>(type_info, "System.Reflection", "AssemblyKeyFileAttribute");
        }
        inline app::AssemblyKeyFileAttribute* create() {
            return il2cpp::create_object<app::AssemblyKeyFileAttribute>(get_class());
        }
    } // namespace AssemblyKeyFileAttribute
} // namespace app::classes::types

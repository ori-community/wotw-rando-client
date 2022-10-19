#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyProductAttribute {
        namespace {
            inline app::AssemblyProductAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyProductAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyProductAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyProductAttribute__Class>(type_info, "System.Reflection", "AssemblyProductAttribute");
        }
        inline app::AssemblyProductAttribute* create() {
            return il2cpp::create_object<app::AssemblyProductAttribute>(get_class());
        }
    } // namespace AssemblyProductAttribute
} // namespace app::classes::types

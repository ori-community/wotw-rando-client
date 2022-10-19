#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyDescriptionAttribute {
        namespace {
            inline app::AssemblyDescriptionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyDescriptionAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyDescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyDescriptionAttribute__Class>(type_info, "System.Reflection", "AssemblyDescriptionAttribute");
        }
        inline app::AssemblyDescriptionAttribute* create() {
            return il2cpp::create_object<app::AssemblyDescriptionAttribute>(get_class());
        }
    } // namespace AssemblyDescriptionAttribute
} // namespace app::classes::types

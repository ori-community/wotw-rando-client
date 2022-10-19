#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyDelaySignAttribute {
        namespace {
            inline app::AssemblyDelaySignAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyDelaySignAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyDelaySignAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyDelaySignAttribute__Class>(type_info, "System.Reflection", "AssemblyDelaySignAttribute");
        }
        inline app::AssemblyDelaySignAttribute* create() {
            return il2cpp::create_object<app::AssemblyDelaySignAttribute>(get_class());
        }
    } // namespace AssemblyDelaySignAttribute
} // namespace app::classes::types

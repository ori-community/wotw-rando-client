#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyTrademarkAttribute {
        namespace {
            inline app::AssemblyTrademarkAttribute__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyTrademarkAttribute__Class** type_info = &type_info_ref;
        inline app::AssemblyTrademarkAttribute__Class* get_class() {
            return il2cpp::get_class<app::AssemblyTrademarkAttribute__Class>(type_info, "System.Reflection", "AssemblyTrademarkAttribute");
        }
        inline app::AssemblyTrademarkAttribute* create() {
            return il2cpp::create_object<app::AssemblyTrademarkAttribute>(get_class());
        }
    } // namespace AssemblyTrademarkAttribute
} // namespace app::classes::types

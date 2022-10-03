#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int64ArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int64ArrayTypeInfo__Class** type_info;
        inline app::Int64ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int64ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int64ArrayTypeInfo");
        }
        inline app::Int64ArrayTypeInfo* create() {
            return il2cpp::create_object<app::Int64ArrayTypeInfo>(get_class());
        }
    } // namespace Int64ArrayTypeInfo
} // namespace app::classes::types

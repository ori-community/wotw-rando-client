#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int16ArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int16ArrayTypeInfo__Class** type_info;
        inline app::Int16ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int16ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int16ArrayTypeInfo");
        }
        inline app::Int16ArrayTypeInfo* create() {
            return il2cpp::create_object<app::Int16ArrayTypeInfo>(get_class());
        }
    } // namespace Int16ArrayTypeInfo
} // namespace app::classes::types

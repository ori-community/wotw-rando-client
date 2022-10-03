#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int32ArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Int32ArrayTypeInfo__Class** type_info;
        inline app::Int32ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::Int32ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "Int32ArrayTypeInfo");
        }
        inline app::Int32ArrayTypeInfo* create() {
            return il2cpp::create_object<app::Int32ArrayTypeInfo>(get_class());
        }
    } // namespace Int32ArrayTypeInfo
} // namespace app::classes::types

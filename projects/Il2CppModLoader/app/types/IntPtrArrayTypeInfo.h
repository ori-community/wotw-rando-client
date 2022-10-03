#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntPtrArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntPtrArrayTypeInfo__Class** type_info;
        inline app::IntPtrArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IntPtrArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "IntPtrArrayTypeInfo");
        }
        inline app::IntPtrArrayTypeInfo* create() {
            return il2cpp::create_object<app::IntPtrArrayTypeInfo>(get_class());
        }
    } // namespace IntPtrArrayTypeInfo
} // namespace app::classes::types

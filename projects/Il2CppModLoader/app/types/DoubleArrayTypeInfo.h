#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoubleArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoubleArrayTypeInfo__Class** type_info;
        inline app::DoubleArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DoubleArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DoubleArrayTypeInfo");
        }
        inline app::DoubleArrayTypeInfo* create() {
            return il2cpp::create_object<app::DoubleArrayTypeInfo>(get_class());
        }
    } // namespace DoubleArrayTypeInfo
} // namespace app::classes::types

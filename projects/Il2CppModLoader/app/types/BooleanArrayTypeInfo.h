#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BooleanArrayTypeInfo__Class** type_info;
        inline app::BooleanArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::BooleanArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "BooleanArrayTypeInfo");
        }
        inline app::BooleanArrayTypeInfo* create() {
            return il2cpp::create_object<app::BooleanArrayTypeInfo>(get_class());
        }
    } // namespace BooleanArrayTypeInfo
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BooleanTypeInfo__Class** type_info;
        inline app::BooleanTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::BooleanTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "BooleanTypeInfo");
        }
        inline app::BooleanTypeInfo* create() {
            return il2cpp::create_object<app::BooleanTypeInfo>(get_class());
        }
    } // namespace BooleanTypeInfo
} // namespace app::classes::types

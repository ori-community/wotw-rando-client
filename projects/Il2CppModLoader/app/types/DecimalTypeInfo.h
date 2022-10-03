#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecimalTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecimalTypeInfo__Class** type_info;
        inline app::DecimalTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DecimalTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DecimalTypeInfo");
        }
        inline app::DecimalTypeInfo* create() {
            return il2cpp::create_object<app::DecimalTypeInfo>(get_class());
        }
    } // namespace DecimalTypeInfo
} // namespace app::classes::types

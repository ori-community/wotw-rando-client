#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoubleTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoubleTypeInfo__Class** type_info;
        inline app::DoubleTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DoubleTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DoubleTypeInfo");
        }
        inline app::DoubleTypeInfo* create() {
            return il2cpp::create_object<app::DoubleTypeInfo>(get_class());
        }
    } // namespace DoubleTypeInfo
} // namespace app::classes::types

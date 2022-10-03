#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt64ArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt64ArrayTypeInfo__Class** type_info;
        inline app::UInt64ArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt64ArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt64ArrayTypeInfo");
        }
        inline app::UInt64ArrayTypeInfo* create() {
            return il2cpp::create_object<app::UInt64ArrayTypeInfo>(get_class());
        }
    } // namespace UInt64ArrayTypeInfo
} // namespace app::classes::types

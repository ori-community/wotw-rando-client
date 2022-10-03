#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt64TypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt64TypeInfo__Class** type_info;
        inline app::UInt64TypeInfo__Class* get_class() {
            return il2cpp::get_class<app::UInt64TypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "UInt64TypeInfo");
        }
        inline app::UInt64TypeInfo* create() {
            return il2cpp::create_object<app::UInt64TypeInfo>(get_class());
        }
    } // namespace UInt64TypeInfo
} // namespace app::classes::types

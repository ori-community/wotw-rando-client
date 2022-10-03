#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeOffsetTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeOffsetTypeInfo__Class** type_info;
        inline app::DateTimeOffsetTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffsetTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DateTimeOffsetTypeInfo");
        }
        inline app::DateTimeOffsetTypeInfo* create() {
            return il2cpp::create_object<app::DateTimeOffsetTypeInfo>(get_class());
        }
    } // namespace DateTimeOffsetTypeInfo
} // namespace app::classes::types

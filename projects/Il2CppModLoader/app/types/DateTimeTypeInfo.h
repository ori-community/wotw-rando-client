#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeTypeInfo__Class** type_info;
        inline app::DateTimeTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "DateTimeTypeInfo");
        }
        inline app::DateTimeTypeInfo* create() {
            return il2cpp::create_object<app::DateTimeTypeInfo>(get_class());
        }
    } // namespace DateTimeTypeInfo
} // namespace app::classes::types

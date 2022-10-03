#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StringTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StringTypeInfo__Class** type_info;
        inline app::StringTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::StringTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "StringTypeInfo");
        }
        inline app::StringTypeInfo* create() {
            return il2cpp::create_object<app::StringTypeInfo>(get_class());
        }
    } // namespace StringTypeInfo
} // namespace app::classes::types

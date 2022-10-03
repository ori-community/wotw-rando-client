#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharArrayTypeInfo__Class** type_info;
        inline app::CharArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::CharArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "CharArrayTypeInfo");
        }
        inline app::CharArrayTypeInfo* create() {
            return il2cpp::create_object<app::CharArrayTypeInfo>(get_class());
        }
    } // namespace CharArrayTypeInfo
} // namespace app::classes::types

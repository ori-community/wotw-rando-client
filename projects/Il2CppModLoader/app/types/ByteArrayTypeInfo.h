#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByteArrayTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByteArrayTypeInfo__Class** type_info;
        inline app::ByteArrayTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::ByteArrayTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "ByteArrayTypeInfo");
        }
        inline app::ByteArrayTypeInfo* create() {
            return il2cpp::create_object<app::ByteArrayTypeInfo>(get_class());
        }
    } // namespace ByteArrayTypeInfo
} // namespace app::classes::types

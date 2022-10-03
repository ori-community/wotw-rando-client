#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByteTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByteTypeInfo__Class** type_info;
        inline app::ByteTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::ByteTypeInfo__Class>(type_info, "System.Diagnostics.Tracing", "ByteTypeInfo");
        }
        inline app::ByteTypeInfo* create() {
            return il2cpp::create_object<app::ByteTypeInfo>(get_class());
        }
    } // namespace ByteTypeInfo
} // namespace app::classes::types

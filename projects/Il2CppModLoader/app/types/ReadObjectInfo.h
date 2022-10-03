#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadObjectInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReadObjectInfo__Class** type_info;
        inline app::ReadObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::ReadObjectInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ReadObjectInfo");
        }
        inline app::ReadObjectInfo* create() {
            return il2cpp::create_object<app::ReadObjectInfo>(get_class());
        }
    } // namespace ReadObjectInfo
} // namespace app::classes::types

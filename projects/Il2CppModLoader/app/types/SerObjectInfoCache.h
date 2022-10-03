#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerObjectInfoCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerObjectInfoCache__Class** type_info;
        inline app::SerObjectInfoCache__Class* get_class() {
            return il2cpp::get_class<app::SerObjectInfoCache__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache");
        }
        inline app::SerObjectInfoCache* create() {
            return il2cpp::create_object<app::SerObjectInfoCache>(get_class());
        }
    } // namespace SerObjectInfoCache
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameCache__Class** type_info;
        inline app::NameCache__Class* get_class() {
            return il2cpp::get_class<app::NameCache__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "NameCache");
        }
        inline app::NameCache* create() {
            return il2cpp::create_object<app::NameCache>(get_class());
        }
    } // namespace NameCache
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectMap__Class** type_info;
        inline app::ObjectMap__Class* get_class() {
            return il2cpp::get_class<app::ObjectMap__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
        }
        inline app::ObjectMap* create() {
            return il2cpp::create_object<app::ObjectMap>(get_class());
        }
    } // namespace ObjectMap
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectNull__Class** type_info;
        inline app::ObjectNull__Class* get_class() {
            return il2cpp::get_class<app::ObjectNull__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
        }
        inline app::ObjectNull* create() {
            return il2cpp::create_object<app::ObjectNull>(get_class());
        }
    } // namespace ObjectNull
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializableAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializableAttribute__Class** type_info;
        inline app::SerializableAttribute__Class* get_class() {
            return il2cpp::get_class<app::SerializableAttribute__Class>(type_info, "System", "SerializableAttribute");
        }
        inline app::SerializableAttribute* create() {
            return il2cpp::create_object<app::SerializableAttribute>(get_class());
        }
    } // namespace SerializableAttribute
} // namespace app::classes::types

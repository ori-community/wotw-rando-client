#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationCallback__Class** type_info;
        inline app::SerializationCallback__Class* get_class() {
            return il2cpp::get_class<app::SerializationCallback__Class>(type_info, "Newtonsoft.Json.Serialization", "SerializationCallback");
        }
        inline app::SerializationCallback* create() {
            return il2cpp::create_object<app::SerializationCallback>(get_class());
        }
        inline app::SerializationCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializationCallback__Array>(get_class(), size);
        }
    } // namespace SerializationCallback
} // namespace app::classes::types

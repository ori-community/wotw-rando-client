#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationErrorCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationErrorCallback__Class** type_info;
        inline app::SerializationErrorCallback__Class* get_class() {
            return il2cpp::get_class<app::SerializationErrorCallback__Class>(type_info, "Newtonsoft.Json.Serialization", "SerializationErrorCallback");
        }
        inline app::SerializationErrorCallback* create() {
            return il2cpp::create_object<app::SerializationErrorCallback>(get_class());
        }
        inline app::SerializationErrorCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializationErrorCallback__Array>(get_class(), size);
        }
        inline app::SerializationErrorCallback__Array* create_array(const std::vector<app::SerializationErrorCallback*>& items) {
            return il2cpp::array_new<app::SerializationErrorCallback__Array>(get_class(), items);
        }
    } // namespace SerializationErrorCallback
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDeserializationCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDeserializationCallback__Class** type_info;
        inline app::IDeserializationCallback__Class* get_class() {
            return il2cpp::get_class<app::IDeserializationCallback__Class>(type_info, "System.Runtime.Serialization", "IDeserializationCallback");
        }
        inline app::IDeserializationCallback* create() {
            return il2cpp::create_object<app::IDeserializationCallback>(get_class());
        }
        inline app::IDeserializationCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::IDeserializationCallback__Array>(get_class(), size);
        }
    } // namespace IDeserializationCallback
} // namespace app::classes::types

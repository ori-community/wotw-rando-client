#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationInfoEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationInfoEnumerator__Class** type_info;
        inline app::SerializationInfoEnumerator__Class* get_class() {
            return il2cpp::get_class<app::SerializationInfoEnumerator__Class>(type_info, "System.Runtime.Serialization", "SerializationInfoEnumerator");
        }
        inline app::SerializationInfoEnumerator* create() {
            return il2cpp::create_object<app::SerializationInfoEnumerator>(get_class());
        }
    } // namespace SerializationInfoEnumerator
} // namespace app::classes::types

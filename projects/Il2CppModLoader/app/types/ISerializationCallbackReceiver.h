#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISerializationCallbackReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISerializationCallbackReceiver__Class** type_info;
        inline app::ISerializationCallbackReceiver__Class* get_class() {
            return il2cpp::get_class<app::ISerializationCallbackReceiver__Class>(type_info, "UnityEngine", "ISerializationCallbackReceiver");
        }
        inline app::ISerializationCallbackReceiver* create() {
            return il2cpp::create_object<app::ISerializationCallbackReceiver>(get_class());
        }
    } // namespace ISerializationCallbackReceiver
} // namespace app::classes::types

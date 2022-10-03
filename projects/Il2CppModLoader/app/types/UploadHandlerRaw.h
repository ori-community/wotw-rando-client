#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadHandlerRaw {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadHandlerRaw__Class** type_info;
        inline app::UploadHandlerRaw__Class* get_class() {
            return il2cpp::get_class<app::UploadHandlerRaw__Class>(type_info, "UnityEngine.Networking", "UploadHandlerRaw");
        }
        inline app::UploadHandlerRaw* create() {
            return il2cpp::create_object<app::UploadHandlerRaw>(get_class());
        }
    } // namespace UploadHandlerRaw
} // namespace app::classes::types

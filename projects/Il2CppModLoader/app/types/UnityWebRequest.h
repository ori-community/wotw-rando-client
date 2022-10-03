#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityWebRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityWebRequest__Class** type_info;
        inline app::UnityWebRequest__Class* get_class() {
            return il2cpp::get_class<app::UnityWebRequest__Class>(type_info, "UnityEngine.Networking", "UnityWebRequest");
        }
        inline app::UnityWebRequest* create() {
            return il2cpp::create_object<app::UnityWebRequest>(get_class());
        }
    } // namespace UnityWebRequest
} // namespace app::classes::types

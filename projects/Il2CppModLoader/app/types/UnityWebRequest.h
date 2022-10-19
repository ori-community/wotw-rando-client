#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityWebRequest {
        inline app::UnityWebRequest__Class** type_info = (app::UnityWebRequest__Class**)(modloader::win::memory::resolve_rva(0x04716A88));
        inline app::UnityWebRequest__Class* get_class() {
            return il2cpp::get_class<app::UnityWebRequest__Class>(type_info, "UnityEngine.Networking", "UnityWebRequest");
        }
        inline app::UnityWebRequest* create() {
            return il2cpp::create_object<app::UnityWebRequest>(get_class());
        }
    } // namespace UnityWebRequest
} // namespace app::classes::types

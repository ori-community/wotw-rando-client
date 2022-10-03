#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadHandlerBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadHandlerBuffer__Class** type_info;
        inline app::DownloadHandlerBuffer__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandlerBuffer__Class>(type_info, "UnityEngine.Networking", "DownloadHandlerBuffer");
        }
        inline app::DownloadHandlerBuffer* create() {
            return il2cpp::create_object<app::DownloadHandlerBuffer>(get_class());
        }
    } // namespace DownloadHandlerBuffer
} // namespace app::classes::types

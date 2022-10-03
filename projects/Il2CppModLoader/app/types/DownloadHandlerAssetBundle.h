#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadHandlerAssetBundle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadHandlerAssetBundle__Class** type_info;
        inline app::DownloadHandlerAssetBundle__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandlerAssetBundle__Class>(type_info, "UnityEngine.Networking", "DownloadHandlerAssetBundle");
        }
        inline app::DownloadHandlerAssetBundle* create() {
            return il2cpp::create_object<app::DownloadHandlerAssetBundle>(get_class());
        }
    } // namespace DownloadHandlerAssetBundle
} // namespace app::classes::types

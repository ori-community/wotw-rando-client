#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DownloadHandlerAssetBundle {
        inline app::DownloadHandlerAssetBundle__Class** type_info = (app::DownloadHandlerAssetBundle__Class**)(modloader::win::memory::resolve_rva(0x047247C8));
        inline app::DownloadHandlerAssetBundle__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandlerAssetBundle__Class>(type_info, "UnityEngine.Networking", "DownloadHandlerAssetBundle");
        }
        inline app::DownloadHandlerAssetBundle* create() {
            return il2cpp::create_object<app::DownloadHandlerAssetBundle>(get_class());
        }
    } // namespace DownloadHandlerAssetBundle
} // namespace app::classes::types

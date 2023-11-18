#pragma once
#include <Modloader/app/structs/DownloadHandlerAssetBundle.h>
#include <Modloader/app/structs/DownloadHandlerAssetBundle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadHandlerAssetBundle {
        inline app::DownloadHandlerAssetBundle__Class** type_info() {
            static app::DownloadHandlerAssetBundle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DownloadHandlerAssetBundle__Class**)(modloader::win::memory::resolve_rva(0x047247C8));
            }
            return cache;
        }
        inline app::DownloadHandlerAssetBundle__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandlerAssetBundle__Class>(type_info(), "UnityEngine.Networking", "DownloadHandlerAssetBundle");
        }
        inline app::DownloadHandlerAssetBundle* create() {
            return il2cpp::create_object<app::DownloadHandlerAssetBundle>(get_class());
        }
    } // namespace DownloadHandlerAssetBundle
} // namespace app::classes::types

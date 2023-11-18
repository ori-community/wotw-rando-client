#pragma once
#include <Modloader/app/structs/AssetBundleRequest.h>
#include <Modloader/app/structs/AssetBundleRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetBundleRequest {
        inline app::AssetBundleRequest__Class** type_info() {
            static app::AssetBundleRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetBundleRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetBundleRequest__Class* get_class() {
            return il2cpp::get_class<app::AssetBundleRequest__Class>(type_info(), "UnityEngine", "AssetBundleRequest");
        }
        inline app::AssetBundleRequest* create() {
            return il2cpp::create_object<app::AssetBundleRequest>(get_class());
        }
    } // namespace AssetBundleRequest
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/AssetBundleCreateRequest.h>
#include <Modloader/app/structs/AssetBundleCreateRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetBundleCreateRequest {
        inline app::AssetBundleCreateRequest__Class** type_info() {
            static app::AssetBundleCreateRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetBundleCreateRequest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetBundleCreateRequest__Class* get_class() {
            return il2cpp::get_class<app::AssetBundleCreateRequest__Class>(type_info(), "UnityEngine", "AssetBundleCreateRequest");
        }
        inline app::AssetBundleCreateRequest* create() {
            return il2cpp::create_object<app::AssetBundleCreateRequest>(get_class());
        }
    } // namespace AssetBundleCreateRequest
} // namespace app::classes::types

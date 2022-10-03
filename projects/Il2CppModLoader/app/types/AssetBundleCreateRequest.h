#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetBundleCreateRequest {
        namespace {
            app::AssetBundleCreateRequest__Class* type_info_ref = nullptr;
        }
        app::AssetBundleCreateRequest__Class** type_info = &type_info_ref;
        inline app::AssetBundleCreateRequest__Class* get_class() {
            return il2cpp::get_class<app::AssetBundleCreateRequest__Class>(type_info, "UnityEngine", "AssetBundleCreateRequest");
        }
        inline app::AssetBundleCreateRequest* create() {
            return il2cpp::create_object<app::AssetBundleCreateRequest>(get_class());
        }
    } // namespace AssetBundleCreateRequest
} // namespace app::classes::types

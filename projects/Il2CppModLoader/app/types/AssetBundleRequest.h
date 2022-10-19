#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssetBundleRequest {
        namespace {
            inline app::AssetBundleRequest__Class* type_info_ref = nullptr;
        }
        inline app::AssetBundleRequest__Class** type_info = &type_info_ref;
        inline app::AssetBundleRequest__Class* get_class() {
            return il2cpp::get_class<app::AssetBundleRequest__Class>(type_info, "UnityEngine", "AssetBundleRequest");
        }
        inline app::AssetBundleRequest* create() {
            return il2cpp::create_object<app::AssetBundleRequest>(get_class());
        }
    } // namespace AssetBundleRequest
} // namespace app::classes::types

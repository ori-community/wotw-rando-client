#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetBundleRecompressOperation {
        namespace {
            app::AssetBundleRecompressOperation__Class* type_info_ref = nullptr;
        }
        app::AssetBundleRecompressOperation__Class** type_info = &type_info_ref;
        inline app::AssetBundleRecompressOperation__Class* get_class() {
            return il2cpp::get_class<app::AssetBundleRecompressOperation__Class>(type_info, "UnityEngine", "AssetBundleRecompressOperation");
        }
        inline app::AssetBundleRecompressOperation* create() {
            return il2cpp::create_object<app::AssetBundleRecompressOperation>(get_class());
        }
    } // namespace AssetBundleRecompressOperation
} // namespace app::classes::types

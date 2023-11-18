#pragma once
#include <Modloader/app/structs/AssetBundleRecompressOperation.h>
#include <Modloader/app/structs/AssetBundleRecompressOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssetBundleRecompressOperation {
        inline app::AssetBundleRecompressOperation__Class** type_info() {
            static app::AssetBundleRecompressOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssetBundleRecompressOperation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssetBundleRecompressOperation__Class* get_class() {
            return il2cpp::get_class<app::AssetBundleRecompressOperation__Class>(type_info(), "UnityEngine", "AssetBundleRecompressOperation");
        }
        inline app::AssetBundleRecompressOperation* create() {
            return il2cpp::create_object<app::AssetBundleRecompressOperation>(get_class());
        }
    } // namespace AssetBundleRecompressOperation
} // namespace app::classes::types

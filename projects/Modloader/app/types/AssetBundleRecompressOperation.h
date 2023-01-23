#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AssetBundleRecompressOperation__Class.h>
#include <Modloader/app/structs/AssetBundleRecompressOperation.h>

namespace app::classes::types {
    namespace AssetBundleRecompressOperation {
        namespace {
            inline app::AssetBundleRecompressOperation__Class* type_info_ref = nullptr;
        }
        inline app::AssetBundleRecompressOperation__Class** type_info = &type_info_ref;
        inline app::AssetBundleRecompressOperation__Class* get_class() {
            return il2cpp::get_class<app::AssetBundleRecompressOperation__Class>(type_info, "UnityEngine", "AssetBundleRecompressOperation");
        }
        inline app::AssetBundleRecompressOperation* create() {
            return il2cpp::create_object<app::AssetBundleRecompressOperation>(get_class());
        }
    } // namespace AssetBundleRecompressOperation
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/UberAssetPrewarmContainer.h>
#include <Modloader/app/structs/UberAssetPrewarmContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberAssetPrewarmContainer {
        inline app::UberAssetPrewarmContainer__Class** type_info() {
            static app::UberAssetPrewarmContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberAssetPrewarmContainer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberAssetPrewarmContainer__Class* get_class() {
            return il2cpp::get_class<app::UberAssetPrewarmContainer__Class>(type_info(), "UberShader.optimizations", "UberAssetPrewarmContainer");
        }
        inline app::UberAssetPrewarmContainer* create() {
            return il2cpp::create_object<app::UberAssetPrewarmContainer>(get_class());
        }
    } // namespace UberAssetPrewarmContainer
} // namespace app::classes::types

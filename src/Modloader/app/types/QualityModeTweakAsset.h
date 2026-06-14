#pragma once
#include <Modloader/app/structs/QualityModeTweakAsset.h>
#include <Modloader/app/structs/QualityModeTweakAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualityModeTweakAsset {
        inline app::QualityModeTweakAsset__Class** type_info() {
            static app::QualityModeTweakAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QualityModeTweakAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QualityModeTweakAsset__Class* get_class() {
            return il2cpp::get_class<app::QualityModeTweakAsset__Class>(type_info(), "MoonDataPlatform", "QualityModeTweakAsset");
        }
        inline app::QualityModeTweakAsset* create() {
            return il2cpp::create_object<app::QualityModeTweakAsset>(get_class());
        }
    } // namespace QualityModeTweakAsset
} // namespace app::classes::types

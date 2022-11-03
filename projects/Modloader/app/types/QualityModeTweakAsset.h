#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QualityModeTweakAsset {
        namespace {
            inline app::QualityModeTweakAsset__Class* type_info_ref = nullptr;
        }
        inline app::QualityModeTweakAsset__Class** type_info = &type_info_ref;
        inline app::QualityModeTweakAsset__Class* get_class() {
            return il2cpp::get_class<app::QualityModeTweakAsset__Class>(type_info, "MoonDataPlatform", "QualityModeTweakAsset");
        }
        inline app::QualityModeTweakAsset* create() {
            return il2cpp::create_object<app::QualityModeTweakAsset>(get_class());
        }
    } // namespace QualityModeTweakAsset
} // namespace app::classes::types

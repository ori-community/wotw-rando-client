#pragma once
#include <Modloader/app/structs/LegacyTextureUVAnimator.h>
#include <Modloader/app/structs/LegacyTextureUVAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTextureUVAnimator {
        inline app::LegacyTextureUVAnimator__Class** type_info() {
            static app::LegacyTextureUVAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTextureUVAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTextureUVAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTextureUVAnimator__Class>(type_info(), "", "LegacyTextureUVAnimator");
        }
        inline app::LegacyTextureUVAnimator* create() {
            return il2cpp::create_object<app::LegacyTextureUVAnimator>(get_class());
        }
    } // namespace LegacyTextureUVAnimator
} // namespace app::classes::types

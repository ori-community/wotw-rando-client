#pragma once
#include <Modloader/app/structs/LegacyUnityTextFadeWordsAnimator.h>
#include <Modloader/app/structs/LegacyUnityTextFadeWordsAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyUnityTextFadeWordsAnimator {
        inline app::LegacyUnityTextFadeWordsAnimator__Class** type_info() {
            static app::LegacyUnityTextFadeWordsAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyUnityTextFadeWordsAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyUnityTextFadeWordsAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyUnityTextFadeWordsAnimator__Class>(type_info(), "", "LegacyUnityTextFadeWordsAnimator");
        }
        inline app::LegacyUnityTextFadeWordsAnimator* create() {
            return il2cpp::create_object<app::LegacyUnityTextFadeWordsAnimator>(get_class());
        }
    } // namespace LegacyUnityTextFadeWordsAnimator
} // namespace app::classes::types

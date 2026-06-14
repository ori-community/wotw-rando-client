#pragma once
#include <Modloader/app/structs/LegacyTranslateAnimator.h>
#include <Modloader/app/structs/LegacyTranslateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyTranslateAnimator {
        inline app::LegacyTranslateAnimator__Class** type_info() {
            static app::LegacyTranslateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyTranslateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyTranslateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyTranslateAnimator__Class>(type_info(), "", "LegacyTranslateAnimator");
        }
        inline app::LegacyTranslateAnimator* create() {
            return il2cpp::create_object<app::LegacyTranslateAnimator>(get_class());
        }
    } // namespace LegacyTranslateAnimator
} // namespace app::classes::types

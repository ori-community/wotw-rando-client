#pragma once
#include <Modloader/app/structs/LegacyUberTransformFollowAnimator.h>
#include <Modloader/app/structs/LegacyUberTransformFollowAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyUberTransformFollowAnimator {
        inline app::LegacyUberTransformFollowAnimator__Class** type_info() {
            static app::LegacyUberTransformFollowAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyUberTransformFollowAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyUberTransformFollowAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyUberTransformFollowAnimator__Class>(type_info(), "", "LegacyUberTransformFollowAnimator");
        }
        inline app::LegacyUberTransformFollowAnimator* create() {
            return il2cpp::create_object<app::LegacyUberTransformFollowAnimator>(get_class());
        }
    } // namespace LegacyUberTransformFollowAnimator
} // namespace app::classes::types

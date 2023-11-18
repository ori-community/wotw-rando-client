#pragma once
#include <Modloader/app/structs/LegacyRotateAnimator.h>
#include <Modloader/app/structs/LegacyRotateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyRotateAnimator {
        inline app::LegacyRotateAnimator__Class** type_info() {
            static app::LegacyRotateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyRotateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyRotateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyRotateAnimator__Class>(type_info(), "", "LegacyRotateAnimator");
        }
        inline app::LegacyRotateAnimator* create() {
            return il2cpp::create_object<app::LegacyRotateAnimator>(get_class());
        }
    } // namespace LegacyRotateAnimator
} // namespace app::classes::types

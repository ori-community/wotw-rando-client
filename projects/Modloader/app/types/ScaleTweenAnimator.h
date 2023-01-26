#pragma once
#include <Modloader/app/structs/ScaleTweenAnimator.h>
#include <Modloader/app/structs/ScaleTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleTweenAnimator {
        inline app::ScaleTweenAnimator__Class** type_info() {
            static app::ScaleTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleTweenAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleTweenAnimator__Class>(type_info(), "Moon.Timeline", "ScaleTweenAnimator");
        }
        inline app::ScaleTweenAnimator* create() {
            return il2cpp::create_object<app::ScaleTweenAnimator>(get_class());
        }
    } // namespace ScaleTweenAnimator
} // namespace app::classes::types

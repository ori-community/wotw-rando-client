#pragma once
#include <Modloader/app/structs/AnimationMontageEventContext.h>
#include <Modloader/app/structs/AnimationMontageEventContext__Boxed.h>
#include <Modloader/app/structs/AnimationMontageEventContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationMontageEventContext {
        inline app::AnimationMontageEventContext__Class** type_info() {
            static app::AnimationMontageEventContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationMontageEventContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationMontageEventContext__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontageEventContext__Class>(type_info(), "Moon", "AnimationMontageEventContext");
        }
        inline app::AnimationMontageEventContext* create() {
            return il2cpp::create_object<app::AnimationMontageEventContext>(get_class());
        }
        inline app::AnimationMontageEventContext__Boxed* box(app::AnimationMontageEventContext value) {
            return il2cpp::box_value<app::AnimationMontageEventContext__Boxed>(get_class(), value);
        }
    } // namespace AnimationMontageEventContext
} // namespace app::classes::types

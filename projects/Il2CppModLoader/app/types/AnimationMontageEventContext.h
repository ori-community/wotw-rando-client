#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationMontageEventContext {
        namespace {
            inline app::AnimationMontageEventContext__Class* type_info_ref = nullptr;
        }
        inline app::AnimationMontageEventContext__Class** type_info = &type_info_ref;
        inline app::AnimationMontageEventContext__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontageEventContext__Class>(type_info, "Moon", "AnimationMontageEventContext");
        }
        inline app::AnimationMontageEventContext* create() {
            return il2cpp::create_object<app::AnimationMontageEventContext>(get_class());
        }
        inline app::AnimationMontageEventContext__Boxed* box(app::AnimationMontageEventContext value) {
            return il2cpp::box_value<app::AnimationMontageEventContext__Boxed>(get_class(), value);
        }
    } // namespace AnimationMontageEventContext
} // namespace app::classes::types

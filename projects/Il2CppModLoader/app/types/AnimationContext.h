#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationContext__Class** type_info;
        inline app::AnimationContext__Class* get_class() {
            return il2cpp::get_class<app::AnimationContext__Class>(type_info, "Moon.Timeline", "AnimationContext");
        }
        inline app::AnimationContext* create() {
            return il2cpp::create_object<app::AnimationContext>(get_class());
        }
        inline app::AnimationContext__Boxed* box(app::AnimationContext value) {
            return il2cpp::box_value<app::AnimationContext__Boxed>(get_class(), value);
        }
    } // namespace AnimationContext
} // namespace app::classes::types

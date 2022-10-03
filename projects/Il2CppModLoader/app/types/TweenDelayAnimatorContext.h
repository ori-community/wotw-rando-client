#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TweenDelayAnimatorContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TweenDelayAnimatorContext__Class** type_info;
        inline app::TweenDelayAnimatorContext__Class* get_class() {
            return il2cpp::get_class<app::TweenDelayAnimatorContext__Class>(type_info, "Moon.Timeline", "TweenDelayAnimatorContext");
        }
        inline app::TweenDelayAnimatorContext* create() {
            return il2cpp::create_object<app::TweenDelayAnimatorContext>(get_class());
        }
    } // namespace TweenDelayAnimatorContext
} // namespace app::classes::types

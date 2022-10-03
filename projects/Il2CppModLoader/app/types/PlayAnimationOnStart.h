#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayAnimationOnStart {
        namespace {
            app::PlayAnimationOnStart__Class* type_info_ref = nullptr;
        }
        app::PlayAnimationOnStart__Class** type_info = &type_info_ref;
        inline app::PlayAnimationOnStart__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimationOnStart__Class>(type_info, "Moon", "PlayAnimationOnStart");
        }
        inline app::PlayAnimationOnStart* create() {
            return il2cpp::create_object<app::PlayAnimationOnStart>(get_class());
        }
    } // namespace PlayAnimationOnStart
} // namespace app::classes::types

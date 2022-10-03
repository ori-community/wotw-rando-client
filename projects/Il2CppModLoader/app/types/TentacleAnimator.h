#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimator {
        namespace {
            app::TentacleAnimator__Class* type_info_ref = nullptr;
        }
        app::TentacleAnimator__Class** type_info = &type_info_ref;
        inline app::TentacleAnimator__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimator__Class>(type_info, "Moon.Timeline", "TentacleAnimator");
        }
        inline app::TentacleAnimator* create() {
            return il2cpp::create_object<app::TentacleAnimator>(get_class());
        }
    } // namespace TentacleAnimator
} // namespace app::classes::types

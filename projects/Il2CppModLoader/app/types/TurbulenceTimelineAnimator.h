#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceTimelineAnimator {
        namespace {
            app::TurbulenceTimelineAnimator__Class* type_info_ref = nullptr;
        }
        app::TurbulenceTimelineAnimator__Class** type_info = &type_info_ref;
        inline app::TurbulenceTimelineAnimator__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTimelineAnimator__Class>(type_info, "", "TurbulenceTimelineAnimator");
        }
        inline app::TurbulenceTimelineAnimator* create() {
            return il2cpp::create_object<app::TurbulenceTimelineAnimator>(get_class());
        }
    } // namespace TurbulenceTimelineAnimator
} // namespace app::classes::types

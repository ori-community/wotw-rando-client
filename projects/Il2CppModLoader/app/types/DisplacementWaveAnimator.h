#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisplacementWaveAnimator {
        namespace {
            app::DisplacementWaveAnimator__Class* type_info_ref = nullptr;
        }
        app::DisplacementWaveAnimator__Class** type_info = &type_info_ref;
        inline app::DisplacementWaveAnimator__Class* get_class() {
            return il2cpp::get_class<app::DisplacementWaveAnimator__Class>(type_info, "", "DisplacementWaveAnimator");
        }
        inline app::DisplacementWaveAnimator* create() {
            return il2cpp::create_object<app::DisplacementWaveAnimator>(get_class());
        }
    } // namespace DisplacementWaveAnimator
} // namespace app::classes::types

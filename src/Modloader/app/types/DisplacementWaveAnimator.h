#pragma once
#include <Modloader/app/structs/DisplacementWaveAnimator.h>
#include <Modloader/app/structs/DisplacementWaveAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisplacementWaveAnimator {
        inline app::DisplacementWaveAnimator__Class** type_info() {
            static app::DisplacementWaveAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DisplacementWaveAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DisplacementWaveAnimator__Class* get_class() {
            return il2cpp::get_class<app::DisplacementWaveAnimator__Class>(type_info(), "", "DisplacementWaveAnimator");
        }
        inline app::DisplacementWaveAnimator* create() {
            return il2cpp::create_object<app::DisplacementWaveAnimator>(get_class());
        }
    } // namespace DisplacementWaveAnimator
} // namespace app::classes::types

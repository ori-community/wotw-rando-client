#pragma once
#include <Modloader/app/structs/SpiritTreeTransformationAnimator.h>
#include <Modloader/app/structs/SpiritTreeTransformationAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritTreeTransformationAnimator {
        inline app::SpiritTreeTransformationAnimator__Class** type_info() {
            static app::SpiritTreeTransformationAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritTreeTransformationAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritTreeTransformationAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritTreeTransformationAnimator__Class>(type_info(), "", "SpiritTreeTransformationAnimator");
        }
        inline app::SpiritTreeTransformationAnimator* create() {
            return il2cpp::create_object<app::SpiritTreeTransformationAnimator>(get_class());
        }
    } // namespace SpiritTreeTransformationAnimator
} // namespace app::classes::types

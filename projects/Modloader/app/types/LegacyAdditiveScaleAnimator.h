#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyAdditiveScaleAnimator__Class.h>
#include <Modloader/app/structs/LegacyAdditiveScaleAnimator.h>

namespace app::classes::types {
    namespace LegacyAdditiveScaleAnimator {
        namespace {
            inline app::LegacyAdditiveScaleAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyAdditiveScaleAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyAdditiveScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyAdditiveScaleAnimator__Class>(type_info, "", "LegacyAdditiveScaleAnimator");
        }
        inline app::LegacyAdditiveScaleAnimator* create() {
            return il2cpp::create_object<app::LegacyAdditiveScaleAnimator>(get_class());
        }
    } // namespace LegacyAdditiveScaleAnimator
} // namespace app::classes::types

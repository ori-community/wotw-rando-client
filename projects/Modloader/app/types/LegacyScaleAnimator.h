#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyScaleAnimator__Class.h>
#include <Modloader/app/structs/LegacyScaleAnimator.h>

namespace app::classes::types {
    namespace LegacyScaleAnimator {
        namespace {
            inline app::LegacyScaleAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyScaleAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyScaleAnimator__Class>(type_info, "", "LegacyScaleAnimator");
        }
        inline app::LegacyScaleAnimator* create() {
            return il2cpp::create_object<app::LegacyScaleAnimator>(get_class());
        }
    } // namespace LegacyScaleAnimator
} // namespace app::classes::types

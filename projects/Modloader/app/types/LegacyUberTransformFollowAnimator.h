#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyUberTransformFollowAnimator__Class.h>
#include <Modloader/app/structs/LegacyUberTransformFollowAnimator.h>

namespace app::classes::types {
    namespace LegacyUberTransformFollowAnimator {
        namespace {
            inline app::LegacyUberTransformFollowAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacyUberTransformFollowAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyUberTransformFollowAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyUberTransformFollowAnimator__Class>(type_info, "", "LegacyUberTransformFollowAnimator");
        }
        inline app::LegacyUberTransformFollowAnimator* create() {
            return il2cpp::create_object<app::LegacyUberTransformFollowAnimator>(get_class());
        }
    } // namespace LegacyUberTransformFollowAnimator
} // namespace app::classes::types

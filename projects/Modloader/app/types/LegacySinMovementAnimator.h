#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacySinMovementAnimator__Class.h>
#include <Modloader/app/structs/LegacySinMovementAnimator.h>

namespace app::classes::types {
    namespace LegacySinMovementAnimator {
        namespace {
            inline app::LegacySinMovementAnimator__Class* type_info_ref = nullptr;
        }
        inline app::LegacySinMovementAnimator__Class** type_info = &type_info_ref;
        inline app::LegacySinMovementAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacySinMovementAnimator__Class>(type_info, "", "LegacySinMovementAnimator");
        }
        inline app::LegacySinMovementAnimator* create() {
            return il2cpp::create_object<app::LegacySinMovementAnimator>(get_class());
        }
    } // namespace LegacySinMovementAnimator
} // namespace app::classes::types

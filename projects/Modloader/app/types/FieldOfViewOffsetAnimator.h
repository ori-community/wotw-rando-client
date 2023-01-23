#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FieldOfViewOffsetAnimator__Class.h>
#include <Modloader/app/structs/FieldOfViewOffsetAnimator.h>

namespace app::classes::types {
    namespace FieldOfViewOffsetAnimator {
        namespace {
            inline app::FieldOfViewOffsetAnimator__Class* type_info_ref = nullptr;
        }
        inline app::FieldOfViewOffsetAnimator__Class** type_info = &type_info_ref;
        inline app::FieldOfViewOffsetAnimator__Class* get_class() {
            return il2cpp::get_class<app::FieldOfViewOffsetAnimator__Class>(type_info, "", "FieldOfViewOffsetAnimator");
        }
        inline app::FieldOfViewOffsetAnimator* create() {
            return il2cpp::create_object<app::FieldOfViewOffsetAnimator>(get_class());
        }
    } // namespace FieldOfViewOffsetAnimator
} // namespace app::classes::types

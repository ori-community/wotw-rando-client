#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoveToTargetAnimator__Class.h>
#include <Modloader/app/structs/MoveToTargetAnimator.h>

namespace app::classes::types {
    namespace MoveToTargetAnimator {
        namespace {
            inline app::MoveToTargetAnimator__Class* type_info_ref = nullptr;
        }
        inline app::MoveToTargetAnimator__Class** type_info = &type_info_ref;
        inline app::MoveToTargetAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveToTargetAnimator__Class>(type_info, "", "MoveToTargetAnimator");
        }
        inline app::MoveToTargetAnimator* create() {
            return il2cpp::create_object<app::MoveToTargetAnimator>(get_class());
        }
    } // namespace MoveToTargetAnimator
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CapsuleColliderAnimator__Class.h>
#include <Modloader/app/structs/CapsuleColliderAnimator.h>

namespace app::classes::types {
    namespace CapsuleColliderAnimator {
        namespace {
            inline app::CapsuleColliderAnimator__Class* type_info_ref = nullptr;
        }
        inline app::CapsuleColliderAnimator__Class** type_info = &type_info_ref;
        inline app::CapsuleColliderAnimator__Class* get_class() {
            return il2cpp::get_class<app::CapsuleColliderAnimator__Class>(type_info, "", "CapsuleColliderAnimator");
        }
        inline app::CapsuleColliderAnimator* create() {
            return il2cpp::create_object<app::CapsuleColliderAnimator>(get_class());
        }
    } // namespace CapsuleColliderAnimator
} // namespace app::classes::types

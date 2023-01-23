#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SphereColliderAnimator__Class.h>
#include <Modloader/app/structs/SphereColliderAnimator.h>

namespace app::classes::types {
    namespace SphereColliderAnimator {
        namespace {
            inline app::SphereColliderAnimator__Class* type_info_ref = nullptr;
        }
        inline app::SphereColliderAnimator__Class** type_info = &type_info_ref;
        inline app::SphereColliderAnimator__Class* get_class() {
            return il2cpp::get_class<app::SphereColliderAnimator__Class>(type_info, "", "SphereColliderAnimator");
        }
        inline app::SphereColliderAnimator* create() {
            return il2cpp::create_object<app::SphereColliderAnimator>(get_class());
        }
    } // namespace SphereColliderAnimator
} // namespace app::classes::types

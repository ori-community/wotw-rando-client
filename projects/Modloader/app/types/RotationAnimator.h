#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RotationAnimator__Class.h>
#include <Modloader/app/structs/RotationAnimator.h>

namespace app::classes::types {
    namespace RotationAnimator {
        namespace {
            inline app::RotationAnimator__Class* type_info_ref = nullptr;
        }
        inline app::RotationAnimator__Class** type_info = &type_info_ref;
        inline app::RotationAnimator__Class* get_class() {
            return il2cpp::get_class<app::RotationAnimator__Class>(type_info, "", "RotationAnimator");
        }
        inline app::RotationAnimator* create() {
            return il2cpp::create_object<app::RotationAnimator>(get_class());
        }
    } // namespace RotationAnimator
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimatorOverrideController__Class.h>
#include <Modloader/app/structs/AnimatorOverrideController.h>

namespace app::classes::types {
    namespace AnimatorOverrideController {
        namespace {
            inline app::AnimatorOverrideController__Class* type_info_ref = nullptr;
        }
        inline app::AnimatorOverrideController__Class** type_info = &type_info_ref;
        inline app::AnimatorOverrideController__Class* get_class() {
            return il2cpp::get_class<app::AnimatorOverrideController__Class>(type_info, "UnityEngine", "AnimatorOverrideController");
        }
        inline app::AnimatorOverrideController* create() {
            return il2cpp::create_object<app::AnimatorOverrideController>(get_class());
        }
    } // namespace AnimatorOverrideController
} // namespace app::classes::types

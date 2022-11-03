#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeAnimatorController {
        namespace {
            inline app::RuntimeAnimatorController__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeAnimatorController__Class** type_info = &type_info_ref;
        inline app::RuntimeAnimatorController__Class* get_class() {
            return il2cpp::get_class<app::RuntimeAnimatorController__Class>(type_info, "UnityEngine", "RuntimeAnimatorController");
        }
        inline app::RuntimeAnimatorController* create() {
            return il2cpp::create_object<app::RuntimeAnimatorController>(get_class());
        }
    } // namespace RuntimeAnimatorController
} // namespace app::classes::types

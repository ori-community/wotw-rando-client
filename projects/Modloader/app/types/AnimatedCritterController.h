#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimatedCritterController__Class.h>
#include <Modloader/app/structs/AnimatedCritterController.h>

namespace app::classes::types {
    namespace AnimatedCritterController {
        namespace {
            inline app::AnimatedCritterController__Class* type_info_ref = nullptr;
        }
        inline app::AnimatedCritterController__Class** type_info = &type_info_ref;
        inline app::AnimatedCritterController__Class* get_class() {
            return il2cpp::get_class<app::AnimatedCritterController__Class>(type_info, "", "AnimatedCritterController");
        }
        inline app::AnimatedCritterController* create() {
            return il2cpp::create_object<app::AnimatedCritterController>(get_class());
        }
    } // namespace AnimatedCritterController
} // namespace app::classes::types

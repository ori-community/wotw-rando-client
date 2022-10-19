#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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

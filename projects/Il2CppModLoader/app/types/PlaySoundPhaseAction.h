#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlaySoundPhaseAction {
        namespace {
            inline app::PlaySoundPhaseAction__Class* type_info_ref = nullptr;
        }
        inline app::PlaySoundPhaseAction__Class** type_info = &type_info_ref;
        inline app::PlaySoundPhaseAction__Class* get_class() {
            return il2cpp::get_class<app::PlaySoundPhaseAction__Class>(type_info, "", "PlaySoundPhaseAction");
        }
        inline app::PlaySoundPhaseAction* create() {
            return il2cpp::create_object<app::PlaySoundPhaseAction>(get_class());
        }
    } // namespace PlaySoundPhaseAction
} // namespace app::classes::types

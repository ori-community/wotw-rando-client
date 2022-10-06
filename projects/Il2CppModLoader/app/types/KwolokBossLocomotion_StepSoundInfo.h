#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_StepSoundInfo {
        namespace {
            app::KwolokBossLocomotion_StepSoundInfo__Class* type_info_ref = nullptr;
        }
        app::KwolokBossLocomotion_StepSoundInfo__Class** type_info = &type_info_ref;
        inline app::KwolokBossLocomotion_StepSoundInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_StepSoundInfo__Class>(type_info, "", "KwolokBossLocomotion", "StepSoundInfo");
        }
        inline app::KwolokBossLocomotion_StepSoundInfo* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_StepSoundInfo>(get_class());
        }
        inline app::KwolokBossLocomotion_StepSoundInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossLocomotion_StepSoundInfo__Array>(get_class(), size);
        }
        inline app::KwolokBossLocomotion_StepSoundInfo__Array* create_array(const std::vector<app::KwolokBossLocomotion_StepSoundInfo*>& items) {
            return il2cpp::array_new<app::KwolokBossLocomotion_StepSoundInfo__Array>(get_class(), items);
        }
    } // namespace KwolokBossLocomotion_StepSoundInfo
} // namespace app::classes::types

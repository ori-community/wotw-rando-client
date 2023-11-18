#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_StepSoundInfo__Array.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StepSoundInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_StepSoundInfo__Array {
        inline app::KwolokBossLocomotion_StepSoundInfo__Array__Class** type_info() {
            static app::KwolokBossLocomotion_StepSoundInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossLocomotion_StepSoundInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_StepSoundInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossLocomotion_StepSoundInfo__Array__Class>(type_info(), "", "KwolokBossLocomotion+StepSoundInfo[]");
        }
        inline app::KwolokBossLocomotion_StepSoundInfo__Array* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_StepSoundInfo__Array>(get_class());
        }
    } // namespace KwolokBossLocomotion_StepSoundInfo__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_StepSoundInfo__Array {
        namespace {
            inline app::KwolokBossLocomotion_StepSoundInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossLocomotion_StepSoundInfo__Array__Class** type_info = &type_info_ref;
        inline app::KwolokBossLocomotion_StepSoundInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossLocomotion_StepSoundInfo__Array__Class>(type_info, "", "KwolokBossLocomotion+StepSoundInfo[]");
        }
        inline app::KwolokBossLocomotion_StepSoundInfo__Array* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_StepSoundInfo__Array>(get_class());
        }
    } // namespace KwolokBossLocomotion_StepSoundInfo__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StepSoundInfo__Class.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StepSoundInfo.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StepSoundInfo__Array.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_StepSoundInfo {
        namespace {
            inline app::KwolokBossLocomotion_StepSoundInfo__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossLocomotion_StepSoundInfo__Class** type_info = &type_info_ref;
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

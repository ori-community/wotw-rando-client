#pragma once
#include <Modloader/app/structs/SandWormSetSpeedSettingsBehaviour.h>
#include <Modloader/app/structs/SandWormSetSpeedSettingsBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormSetSpeedSettingsBehaviour {
        inline app::SandWormSetSpeedSettingsBehaviour__Class** type_info() {
            static app::SandWormSetSpeedSettingsBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormSetSpeedSettingsBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormSetSpeedSettingsBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormSetSpeedSettingsBehaviour__Class>(type_info(), "", "SandWormSetSpeedSettingsBehaviour");
        }
        inline app::SandWormSetSpeedSettingsBehaviour* create() {
            return il2cpp::create_object<app::SandWormSetSpeedSettingsBehaviour>(get_class());
        }
    } // namespace SandWormSetSpeedSettingsBehaviour
} // namespace app::classes::types

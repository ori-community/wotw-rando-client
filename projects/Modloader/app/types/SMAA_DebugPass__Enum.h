#pragma once
#include <Modloader/app/structs/SMAA_DebugPass__Enum.h>
#include <Modloader/app/structs/SMAA_DebugPass__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA_DebugPass__Enum {
        inline app::SMAA_DebugPass__Enum__Class** type_info() {
            static app::SMAA_DebugPass__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SMAA_DebugPass__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SMAA_DebugPass__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_DebugPass__Enum__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA", "DebugPass");
        }
        inline app::SMAA_DebugPass__Enum* create() {
            return il2cpp::create_object<app::SMAA_DebugPass__Enum>(get_class());
        }
    } // namespace SMAA_DebugPass__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SMAA_DebugPass__Enum__Class.h>
#include <Modloader/app/structs/SMAA_DebugPass__Enum.h>

namespace app::classes::types {
    namespace SMAA_DebugPass__Enum {
        namespace {
            inline app::SMAA_DebugPass__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SMAA_DebugPass__Enum__Class** type_info = &type_info_ref;
        inline app::SMAA_DebugPass__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_DebugPass__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "DebugPass");
        }
        inline app::SMAA_DebugPass__Enum* create() {
            return il2cpp::create_object<app::SMAA_DebugPass__Enum>(get_class());
        }
    } // namespace SMAA_DebugPass__Enum
} // namespace app::classes::types

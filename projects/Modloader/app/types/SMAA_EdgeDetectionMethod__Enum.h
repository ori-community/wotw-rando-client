#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SMAA_EdgeDetectionMethod__Enum__Class.h>
#include <Modloader/app/structs/SMAA_EdgeDetectionMethod__Enum.h>

namespace app::classes::types {
    namespace SMAA_EdgeDetectionMethod__Enum {
        namespace {
            inline app::SMAA_EdgeDetectionMethod__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SMAA_EdgeDetectionMethod__Enum__Class** type_info = &type_info_ref;
        inline app::SMAA_EdgeDetectionMethod__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_EdgeDetectionMethod__Enum__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "EdgeDetectionMethod");
        }
        inline app::SMAA_EdgeDetectionMethod__Enum* create() {
            return il2cpp::create_object<app::SMAA_EdgeDetectionMethod__Enum>(get_class());
        }
    } // namespace SMAA_EdgeDetectionMethod__Enum
} // namespace app::classes::types

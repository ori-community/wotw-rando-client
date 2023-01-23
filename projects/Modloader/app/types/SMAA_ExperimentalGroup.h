#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SMAA_ExperimentalGroup__Class.h>
#include <Modloader/app/structs/SMAA_ExperimentalGroup.h>

namespace app::classes::types {
    namespace SMAA_ExperimentalGroup {
        namespace {
            inline app::SMAA_ExperimentalGroup__Class* type_info_ref = nullptr;
        }
        inline app::SMAA_ExperimentalGroup__Class** type_info = &type_info_ref;
        inline app::SMAA_ExperimentalGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_ExperimentalGroup__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "ExperimentalGroup");
        }
        inline app::SMAA_ExperimentalGroup* create() {
            return il2cpp::create_object<app::SMAA_ExperimentalGroup>(get_class());
        }
    } // namespace SMAA_ExperimentalGroup
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SMAA_ExperimentalGroup.h>
#include <Modloader/app/structs/SMAA_ExperimentalGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA_ExperimentalGroup {
        inline app::SMAA_ExperimentalGroup__Class** type_info() {
            static app::SMAA_ExperimentalGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SMAA_ExperimentalGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SMAA_ExperimentalGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_ExperimentalGroup__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA", "ExperimentalGroup");
        }
        inline app::SMAA_ExperimentalGroup* create() {
            return il2cpp::create_object<app::SMAA_ExperimentalGroup>(get_class());
        }
    } // namespace SMAA_ExperimentalGroup
} // namespace app::classes::types

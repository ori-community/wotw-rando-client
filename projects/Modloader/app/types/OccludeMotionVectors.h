#pragma once
#include <Modloader/app/structs/OccludeMotionVectors.h>
#include <Modloader/app/structs/OccludeMotionVectors__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OccludeMotionVectors {
        inline app::OccludeMotionVectors__Class** type_info() {
            static app::OccludeMotionVectors__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OccludeMotionVectors__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OccludeMotionVectors__Class* get_class() {
            return il2cpp::get_class<app::OccludeMotionVectors__Class>(type_info(), "LayeredRender", "OccludeMotionVectors");
        }
        inline app::OccludeMotionVectors* create() {
            return il2cpp::create_object<app::OccludeMotionVectors>(get_class());
        }
    } // namespace OccludeMotionVectors
} // namespace app::classes::types

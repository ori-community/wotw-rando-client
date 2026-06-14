#pragma once
#include <Modloader/app/structs/OffsetPose.h>
#include <Modloader/app/structs/OffsetPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetPose {
        inline app::OffsetPose__Class** type_info() {
            static app::OffsetPose__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetPose__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetPose__Class* get_class() {
            return il2cpp::get_class<app::OffsetPose__Class>(type_info(), "RootMotion.FinalIK", "OffsetPose");
        }
        inline app::OffsetPose* create() {
            return il2cpp::create_object<app::OffsetPose>(get_class());
        }
    } // namespace OffsetPose
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OffsetPose__Class.h>
#include <Modloader/app/structs/OffsetPose.h>

namespace app::classes::types {
    namespace OffsetPose {
        namespace {
            inline app::OffsetPose__Class* type_info_ref = nullptr;
        }
        inline app::OffsetPose__Class** type_info = &type_info_ref;
        inline app::OffsetPose__Class* get_class() {
            return il2cpp::get_class<app::OffsetPose__Class>(type_info, "RootMotion.FinalIK", "OffsetPose");
        }
        inline app::OffsetPose* create() {
            return il2cpp::create_object<app::OffsetPose>(get_class());
        }
    } // namespace OffsetPose
} // namespace app::classes::types

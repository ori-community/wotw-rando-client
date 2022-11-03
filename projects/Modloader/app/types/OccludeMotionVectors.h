#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OccludeMotionVectors {
        namespace {
            inline app::OccludeMotionVectors__Class* type_info_ref = nullptr;
        }
        inline app::OccludeMotionVectors__Class** type_info = &type_info_ref;
        inline app::OccludeMotionVectors__Class* get_class() {
            return il2cpp::get_class<app::OccludeMotionVectors__Class>(type_info, "LayeredRender", "OccludeMotionVectors");
        }
        inline app::OccludeMotionVectors* create() {
            return il2cpp::create_object<app::OccludeMotionVectors>(get_class());
        }
    } // namespace OccludeMotionVectors
} // namespace app::classes::types

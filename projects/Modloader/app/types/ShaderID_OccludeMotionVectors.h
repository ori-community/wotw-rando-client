#pragma once
#include <Modloader/app/structs/ShaderID_OccludeMotionVectors.h>
#include <Modloader/app/structs/ShaderID_OccludeMotionVectors__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_OccludeMotionVectors {
        inline app::ShaderID_OccludeMotionVectors__Class** type_info() {
            static app::ShaderID_OccludeMotionVectors__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_OccludeMotionVectors__Class**)(modloader::win::memory::resolve_rva(0x0476F160));
            }
            return cache;
        }
        inline app::ShaderID_OccludeMotionVectors__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_OccludeMotionVectors__Class>(type_info(), "LayeredRender", "ShaderID_OccludeMotionVectors");
        }
        inline app::ShaderID_OccludeMotionVectors* create() {
            return il2cpp::create_object<app::ShaderID_OccludeMotionVectors>(get_class());
        }
    } // namespace ShaderID_OccludeMotionVectors
} // namespace app::classes::types

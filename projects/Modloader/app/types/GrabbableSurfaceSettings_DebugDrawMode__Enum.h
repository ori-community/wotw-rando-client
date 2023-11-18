#pragma once
#include <Modloader/app/structs/GrabbableSurfaceSettings_DebugDrawMode__Enum.h>
#include <Modloader/app/structs/GrabbableSurfaceSettings_DebugDrawMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurfaceSettings_DebugDrawMode__Enum {
        inline app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class** type_info() {
            static app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GrabbableSurfaceSettings_DebugDrawMode__Enum__Class>(type_info(), "", "GrabbableSurfaceSettings", "DebugDrawMode");
        }
        inline app::GrabbableSurfaceSettings_DebugDrawMode__Enum* create() {
            return il2cpp::create_object<app::GrabbableSurfaceSettings_DebugDrawMode__Enum>(get_class());
        }
    } // namespace GrabbableSurfaceSettings_DebugDrawMode__Enum
} // namespace app::classes::types

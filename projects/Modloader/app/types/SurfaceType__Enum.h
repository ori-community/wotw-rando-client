#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceType__Enum {
        namespace {
            inline app::SurfaceType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceType__Enum__Class** type_info = &type_info_ref;
        inline app::SurfaceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SurfaceType__Enum__Class>(type_info, "UnityEngine", "SurfaceType");
        }
        inline app::SurfaceType__Enum* create() {
            return il2cpp::create_object<app::SurfaceType__Enum>(get_class());
        }
    } // namespace SurfaceType__Enum
} // namespace app::classes::types

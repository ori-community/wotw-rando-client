#pragma once
#include <Modloader/app/structs/SurfaceType__Enum.h>
#include <Modloader/app/structs/SurfaceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceType__Enum {
        inline app::SurfaceType__Enum__Class** type_info() {
            static app::SurfaceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SurfaceType__Enum__Class>(type_info(), "UnityEngine", "SurfaceType");
        }
        inline app::SurfaceType__Enum* create() {
            return il2cpp::create_object<app::SurfaceType__Enum>(get_class());
        }
    } // namespace SurfaceType__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SurfaceUsage__Enum.h>
#include <Modloader/app/structs/SurfaceUsage__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SurfaceUsage__Enum {
        inline app::SurfaceUsage__Enum__Class** type_info() {
            static app::SurfaceUsage__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SurfaceUsage__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SurfaceUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::SurfaceUsage__Enum__Class>(type_info(), "UnityEngine", "SurfaceUsage");
        }
        inline app::SurfaceUsage__Enum* create() {
            return il2cpp::create_object<app::SurfaceUsage__Enum>(get_class());
        }
    } // namespace SurfaceUsage__Enum
} // namespace app::classes::types

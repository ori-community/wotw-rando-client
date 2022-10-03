#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceUsage__Enum {
        namespace {
            app::SurfaceUsage__Enum__Class* type_info_ref = nullptr;
        }
        app::SurfaceUsage__Enum__Class** type_info = &type_info_ref;
        inline app::SurfaceUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::SurfaceUsage__Enum__Class>(type_info, "UnityEngine", "SurfaceUsage");
        }
        inline app::SurfaceUsage__Enum* create() {
            return il2cpp::create_object<app::SurfaceUsage__Enum>(get_class());
        }
    } // namespace SurfaceUsage__Enum
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SurfaceUsage__Enum {
        namespace {
            inline app::SurfaceUsage__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SurfaceUsage__Enum__Class** type_info = &type_info_ref;
        inline app::SurfaceUsage__Enum__Class* get_class() {
            return il2cpp::get_class<app::SurfaceUsage__Enum__Class>(type_info, "UnityEngine", "SurfaceUsage");
        }
        inline app::SurfaceUsage__Enum* create() {
            return il2cpp::create_object<app::SurfaceUsage__Enum>(get_class());
        }
    } // namespace SurfaceUsage__Enum
} // namespace app::classes::types

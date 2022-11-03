#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GizmoHandleType__Enum {
        namespace {
            inline app::GizmoHandleType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GizmoHandleType__Enum__Class** type_info = &type_info_ref;
        inline app::GizmoHandleType__Enum__Class* get_class() {
            return il2cpp::get_class<app::GizmoHandleType__Enum__Class>(type_info, "Moon", "GizmoHandleType");
        }
        inline app::GizmoHandleType__Enum* create() {
            return il2cpp::create_object<app::GizmoHandleType__Enum>(get_class());
        }
    } // namespace GizmoHandleType__Enum
} // namespace app::classes::types

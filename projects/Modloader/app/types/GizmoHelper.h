#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GizmoHelper__Class.h>
#include <Modloader/app/structs/GizmoHelper.h>

namespace app::classes::types {
    namespace GizmoHelper {
        inline app::GizmoHelper__Class** type_info = (app::GizmoHelper__Class**)(modloader::win::memory::resolve_rva(0x04766318));
        inline app::GizmoHelper__Class* get_class() {
            return il2cpp::get_class<app::GizmoHelper__Class>(type_info, "", "GizmoHelper");
        }
        inline app::GizmoHelper* create() {
            return il2cpp::create_object<app::GizmoHelper>(get_class());
        }
    } // namespace GizmoHelper
} // namespace app::classes::types

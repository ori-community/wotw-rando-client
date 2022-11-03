#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GizmoSystem {
        inline app::GizmoSystem__Class** type_info = (app::GizmoSystem__Class**)(modloader::win::memory::resolve_rva(0x0470DA98));
        inline app::GizmoSystem__Class* get_class() {
            return il2cpp::get_class<app::GizmoSystem__Class>(type_info, "", "GizmoSystem");
        }
        inline app::GizmoSystem* create() {
            return il2cpp::create_object<app::GizmoSystem>(get_class());
        }
    } // namespace GizmoSystem
} // namespace app::classes::types

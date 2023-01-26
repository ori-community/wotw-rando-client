#pragma once
#include <Modloader/app/structs/GizmoSystem.h>
#include <Modloader/app/structs/GizmoSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GizmoSystem {
        inline app::GizmoSystem__Class** type_info() {
            static app::GizmoSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GizmoSystem__Class**)(modloader::win::memory::resolve_rva(0x0470DA98));
            }
            return cache;
        }
        inline app::GizmoSystem__Class* get_class() {
            return il2cpp::get_class<app::GizmoSystem__Class>(type_info(), "", "GizmoSystem");
        }
        inline app::GizmoSystem* create() {
            return il2cpp::create_object<app::GizmoSystem>(get_class());
        }
    } // namespace GizmoSystem
} // namespace app::classes::types

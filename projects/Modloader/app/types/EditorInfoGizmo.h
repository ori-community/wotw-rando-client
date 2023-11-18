#pragma once
#include <Modloader/app/structs/EditorInfoGizmo.h>
#include <Modloader/app/structs/EditorInfoGizmo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EditorInfoGizmo {
        inline app::EditorInfoGizmo__Class** type_info() {
            static app::EditorInfoGizmo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EditorInfoGizmo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EditorInfoGizmo__Class* get_class() {
            return il2cpp::get_class<app::EditorInfoGizmo__Class>(type_info(), "", "EditorInfoGizmo");
        }
        inline app::EditorInfoGizmo* create() {
            return il2cpp::create_object<app::EditorInfoGizmo>(get_class());
        }
    } // namespace EditorInfoGizmo
} // namespace app::classes::types

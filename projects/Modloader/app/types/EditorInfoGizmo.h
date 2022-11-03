#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EditorInfoGizmo {
        namespace {
            inline app::EditorInfoGizmo__Class* type_info_ref = nullptr;
        }
        inline app::EditorInfoGizmo__Class** type_info = &type_info_ref;
        inline app::EditorInfoGizmo__Class* get_class() {
            return il2cpp::get_class<app::EditorInfoGizmo__Class>(type_info, "", "EditorInfoGizmo");
        }
        inline app::EditorInfoGizmo* create() {
            return il2cpp::create_object<app::EditorInfoGizmo>(get_class());
        }
    } // namespace EditorInfoGizmo
} // namespace app::classes::types

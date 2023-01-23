#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUILayout__Class.h>
#include <Modloader/app/structs/GUILayout.h>

namespace app::classes::types {
    namespace GUILayout {
        namespace {
            inline app::GUILayout__Class* type_info_ref = nullptr;
        }
        inline app::GUILayout__Class** type_info = &type_info_ref;
        inline app::GUILayout__Class* get_class() {
            return il2cpp::get_class<app::GUILayout__Class>(type_info, "UnityEngine", "GUILayout");
        }
        inline app::GUILayout* create() {
            return il2cpp::create_object<app::GUILayout>(get_class());
        }
    } // namespace GUILayout
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContextMenu {
        namespace {
            inline app::ContextMenu__Class* type_info_ref = nullptr;
        }
        inline app::ContextMenu__Class** type_info = &type_info_ref;
        inline app::ContextMenu__Class* get_class() {
            return il2cpp::get_class<app::ContextMenu__Class>(type_info, "UnityEngine", "ContextMenu");
        }
        inline app::ContextMenu* create() {
            return il2cpp::create_object<app::ContextMenu>(get_class());
        }
    } // namespace ContextMenu
} // namespace app::classes::types

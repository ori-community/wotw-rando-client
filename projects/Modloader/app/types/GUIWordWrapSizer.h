#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIWordWrapSizer {
        inline app::GUIWordWrapSizer__Class** type_info = (app::GUIWordWrapSizer__Class**)(modloader::win::memory::resolve_rva(0x047751D8));
        inline app::GUIWordWrapSizer__Class* get_class() {
            return il2cpp::get_class<app::GUIWordWrapSizer__Class>(type_info, "UnityEngine", "GUIWordWrapSizer");
        }
        inline app::GUIWordWrapSizer* create() {
            return il2cpp::create_object<app::GUIWordWrapSizer>(get_class());
        }
    } // namespace GUIWordWrapSizer
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LayoutUtility {
        inline app::LayoutUtility__Class** type_info = (app::LayoutUtility__Class**)(modloader::win::memory::resolve_rva(0x04799B80));
        inline app::LayoutUtility__Class* get_class() {
            return il2cpp::get_class<app::LayoutUtility__Class>(type_info, "UnityEngine.UI", "LayoutUtility");
        }
        inline app::LayoutUtility* create() {
            return il2cpp::create_object<app::LayoutUtility>(get_class());
        }
    } // namespace LayoutUtility
} // namespace app::classes::types

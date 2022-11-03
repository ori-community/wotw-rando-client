#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SelectionUtility {
        inline app::SelectionUtility__Class** type_info = (app::SelectionUtility__Class**)(modloader::win::memory::resolve_rva(0x04742BA0));
        inline app::SelectionUtility__Class* get_class() {
            return il2cpp::get_class<app::SelectionUtility__Class>(type_info, "", "SelectionUtility");
        }
        inline app::SelectionUtility* create() {
            return il2cpp::create_object<app::SelectionUtility>(get_class());
        }
    } // namespace SelectionUtility
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuTabManager {
        inline app::MenuTabManager__Class** type_info = (app::MenuTabManager__Class**)(modloader::win::memory::resolve_rva(0x0472A508));
        inline app::MenuTabManager__Class* get_class() {
            return il2cpp::get_class<app::MenuTabManager__Class>(type_info, "", "MenuTabManager");
        }
        inline app::MenuTabManager* create() {
            return il2cpp::create_object<app::MenuTabManager>(get_class());
        }
    } // namespace MenuTabManager
} // namespace app::classes::types

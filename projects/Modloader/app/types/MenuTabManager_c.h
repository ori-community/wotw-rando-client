#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuTabManager_c {
        inline app::MenuTabManager_c__Class** type_info = (app::MenuTabManager_c__Class**)(modloader::win::memory::resolve_rva(0x047245D0));
        inline app::MenuTabManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuTabManager_c__Class>(type_info, "", "MenuTabManager", "<>c");
        }
        inline app::MenuTabManager_c* create() {
            return il2cpp::create_object<app::MenuTabManager_c>(get_class());
        }
    } // namespace MenuTabManager_c
} // namespace app::classes::types

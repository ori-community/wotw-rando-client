#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeftMenuManager_c {
        inline app::LeftMenuManager_c__Class** type_info = (app::LeftMenuManager_c__Class**)(modloader::win::memory::resolve_rva(0x047590E0));
        inline app::LeftMenuManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftMenuManager_c__Class>(type_info, "", "LeftMenuManager", "<>c");
        }
        inline app::LeftMenuManager_c* create() {
            return il2cpp::create_object<app::LeftMenuManager_c>(get_class());
        }
    } // namespace LeftMenuManager_c
} // namespace app::classes::types

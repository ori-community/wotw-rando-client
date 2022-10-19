#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowInventoryAction_c {
        inline app::ShowInventoryAction_c__Class** type_info = (app::ShowInventoryAction_c__Class**)(modloader::win::memory::resolve_rva(0x04722588));
        inline app::ShowInventoryAction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowInventoryAction_c__Class>(type_info, "", "ShowInventoryAction", "<>c");
        }
        inline app::ShowInventoryAction_c* create() {
            return il2cpp::create_object<app::ShowInventoryAction_c>(get_class());
        }
    } // namespace ShowInventoryAction_c
} // namespace app::classes::types

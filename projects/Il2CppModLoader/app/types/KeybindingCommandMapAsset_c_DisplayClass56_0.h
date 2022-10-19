#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_c_DisplayClass56_0 {
        inline app::KeybindingCommandMapAsset_c_DisplayClass56_0__Class** type_info = (app::KeybindingCommandMapAsset_c_DisplayClass56_0__Class**)(modloader::win::memory::resolve_rva(0x047687C8));
        inline app::KeybindingCommandMapAsset_c_DisplayClass56_0__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_c_DisplayClass56_0__Class>(type_info, "", "KeybindingCommandMapAsset", "<>c__DisplayClass56_0");
        }
        inline app::KeybindingCommandMapAsset_c_DisplayClass56_0* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_c_DisplayClass56_0>(get_class());
        }
    } // namespace KeybindingCommandMapAsset_c_DisplayClass56_0
} // namespace app::classes::types

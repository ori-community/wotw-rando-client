#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpitterEnemy_States {
        inline app::SpitterEnemy_States__Class** type_info = (app::SpitterEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04710D08));
        inline app::SpitterEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SpitterEnemy_States__Class>(type_info, "", "SpitterEnemy", "States");
        }
        inline app::SpitterEnemy_States* create() {
            return il2cpp::create_object<app::SpitterEnemy_States>(get_class());
        }
    } // namespace SpitterEnemy_States
} // namespace app::classes::types

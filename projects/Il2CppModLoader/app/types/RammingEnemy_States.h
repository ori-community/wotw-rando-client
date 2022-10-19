#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingEnemy_States {
        inline app::RammingEnemy_States__Class** type_info = (app::RammingEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x04714E20));
        inline app::RammingEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingEnemy_States__Class>(type_info, "", "RammingEnemy", "States");
        }
        inline app::RammingEnemy_States* create() {
            return il2cpp::create_object<app::RammingEnemy_States>(get_class());
        }
    } // namespace RammingEnemy_States
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RockyEnemy_States {
        inline app::RockyEnemy_States__Class** type_info = (app::RockyEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0474B258));
        inline app::RockyEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::RockyEnemy_States__Class>(type_info, "", "RockyEnemy", "States");
        }
        inline app::RockyEnemy_States* create() {
            return il2cpp::create_object<app::RockyEnemy_States>(get_class());
        }
    } // namespace RockyEnemy_States
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishEnemy_States {
        inline app::FishEnemy_States__Class** type_info = (app::FishEnemy_States__Class**)(modloader::win::memory::resolve_rva(0x0472F1D8));
        inline app::FishEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::FishEnemy_States__Class>(type_info, "", "FishEnemy", "States");
        }
        inline app::FishEnemy_States* create() {
            return il2cpp::create_object<app::FishEnemy_States>(get_class());
        }
    } // namespace FishEnemy_States
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishIdleState {
        inline app::FishIdleState__Class** type_info = (app::FishIdleState__Class**)(modloader::win::memory::resolve_rva(0x04736348));
        inline app::FishIdleState__Class* get_class() {
            return il2cpp::get_class<app::FishIdleState__Class>(type_info, "", "FishIdleState");
        }
        inline app::FishIdleState* create() {
            return il2cpp::create_object<app::FishIdleState>(get_class());
        }
    } // namespace FishIdleState
} // namespace app::classes::types

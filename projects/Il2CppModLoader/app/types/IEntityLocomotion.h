#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEntityLocomotion {
        inline app::IEntityLocomotion__Class** type_info = (app::IEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04763100));
        inline app::IEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::IEntityLocomotion__Class>(type_info, "", "IEntityLocomotion");
        }
    } // namespace IEntityLocomotion
} // namespace app::classes::types

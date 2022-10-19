#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsHelper {
        inline app::PhysicsHelper__Class** type_info = (app::PhysicsHelper__Class**)(modloader::win::memory::resolve_rva(0x04726968));
        inline app::PhysicsHelper__Class* get_class() {
            return il2cpp::get_class<app::PhysicsHelper__Class>(type_info, "", "PhysicsHelper");
        }
        inline app::PhysicsHelper* create() {
            return il2cpp::create_object<app::PhysicsHelper>(get_class());
        }
    } // namespace PhysicsHelper
} // namespace app::classes::types

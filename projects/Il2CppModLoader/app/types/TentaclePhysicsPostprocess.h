#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentaclePhysicsPostprocess {
        inline app::TentaclePhysicsPostprocess__Class** type_info = (app::TentaclePhysicsPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04709D00));
        inline app::TentaclePhysicsPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TentaclePhysicsPostprocess__Class>(type_info, "Moon", "TentaclePhysicsPostprocess");
        }
        inline app::TentaclePhysicsPostprocess* create() {
            return il2cpp::create_object<app::TentaclePhysicsPostprocess>(get_class());
        }
    } // namespace TentaclePhysicsPostprocess
} // namespace app::classes::types

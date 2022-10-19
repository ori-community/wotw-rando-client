#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEntity {
        inline app::TentacleEntity__Class** type_info = (app::TentacleEntity__Class**)(modloader::win::memory::resolve_rva(0x047737C8));
        inline app::TentacleEntity__Class* get_class() {
            return il2cpp::get_class<app::TentacleEntity__Class>(type_info, "", "TentacleEntity");
        }
        inline app::TentacleEntity* create() {
            return il2cpp::create_object<app::TentacleEntity>(get_class());
        }
    } // namespace TentacleEntity
} // namespace app::classes::types

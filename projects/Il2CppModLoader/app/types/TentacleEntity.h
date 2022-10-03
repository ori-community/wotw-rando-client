#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleEntity__Class** type_info;
        inline app::TentacleEntity__Class* get_class() {
            return il2cpp::get_class<app::TentacleEntity__Class>(type_info, "", "TentacleEntity");
        }
        inline app::TentacleEntity* create() {
            return il2cpp::create_object<app::TentacleEntity>(get_class());
        }
    } // namespace TentacleEntity
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityCinematicTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityCinematicTask__Class** type_info;
        inline app::EntityCinematicTask__Class* get_class() {
            return il2cpp::get_class<app::EntityCinematicTask__Class>(type_info, "", "EntityCinematicTask");
        }
        inline app::EntityCinematicTask* create() {
            return il2cpp::create_object<app::EntityCinematicTask>(get_class());
        }
    } // namespace EntityCinematicTask
} // namespace app::classes::types

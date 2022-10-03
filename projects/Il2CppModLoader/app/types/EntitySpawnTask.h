#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntitySpawnTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntitySpawnTask__Class** type_info;
        inline app::EntitySpawnTask__Class* get_class() {
            return il2cpp::get_class<app::EntitySpawnTask__Class>(type_info, "", "EntitySpawnTask");
        }
        inline app::EntitySpawnTask* create() {
            return il2cpp::create_object<app::EntitySpawnTask>(get_class());
        }
    } // namespace EntitySpawnTask
} // namespace app::classes::types

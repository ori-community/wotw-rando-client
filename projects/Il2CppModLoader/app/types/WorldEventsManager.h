#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEventsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WorldEventsManager__Class** type_info;
        inline app::WorldEventsManager__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsManager__Class>(type_info, "", "WorldEventsManager");
        }
        inline app::WorldEventsManager* create() {
            return il2cpp::create_object<app::WorldEventsManager>(get_class());
        }
    } // namespace WorldEventsManager
} // namespace app::classes::types

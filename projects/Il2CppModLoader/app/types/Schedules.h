#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Schedules {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Schedules__Class** type_info;
        inline app::Schedules__Class* get_class() {
            return il2cpp::get_class<app::Schedules__Class>(type_info, "Core", "Schedules");
        }
        inline app::Schedules* create() {
            return il2cpp::create_object<app::Schedules>(get_class());
        }
    } // namespace Schedules
} // namespace app::classes::types

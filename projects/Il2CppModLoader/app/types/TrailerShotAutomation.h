#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrailerShotAutomation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrailerShotAutomation__Class** type_info;
        inline app::TrailerShotAutomation__Class* get_class() {
            return il2cpp::get_class<app::TrailerShotAutomation__Class>(type_info, "", "TrailerShotAutomation");
        }
        inline app::TrailerShotAutomation* create() {
            return il2cpp::create_object<app::TrailerShotAutomation>(get_class());
        }
    } // namespace TrailerShotAutomation
} // namespace app::classes::types

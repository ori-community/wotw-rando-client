#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceRequestResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceRequestResult__Class** type_info;
        inline app::RaceRequestResult__Class* get_class() {
            return il2cpp::get_class<app::RaceRequestResult__Class>(type_info, "SystemIntegration.Races", "RaceRequestResult");
        }
        inline app::RaceRequestResult* create() {
            return il2cpp::create_object<app::RaceRequestResult>(get_class());
        }
    } // namespace RaceRequestResult
} // namespace app::classes::types

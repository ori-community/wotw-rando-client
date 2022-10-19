#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetNightBerryRespawnPosition {
        namespace {
            inline app::SetNightBerryRespawnPosition__Class* type_info_ref = nullptr;
        }
        inline app::SetNightBerryRespawnPosition__Class** type_info = &type_info_ref;
        inline app::SetNightBerryRespawnPosition__Class* get_class() {
            return il2cpp::get_class<app::SetNightBerryRespawnPosition__Class>(type_info, "", "SetNightBerryRespawnPosition");
        }
        inline app::SetNightBerryRespawnPosition* create() {
            return il2cpp::create_object<app::SetNightBerryRespawnPosition>(get_class());
        }
    } // namespace SetNightBerryRespawnPosition
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_MapTrailEntryPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class** type_info;
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation", "MapTrailEntryPool");
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_MapTrailEntryPool>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation_MapTrailEntryPool
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_MapTrailEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class** type_info;
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation", "MapTrailEntry");
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_MapTrailEntry>(get_class());
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array>(get_class(), size);
        }
    } // namespace PlayerUberStateAreaMapInformation_MapTrailEntry
} // namespace app::classes::types

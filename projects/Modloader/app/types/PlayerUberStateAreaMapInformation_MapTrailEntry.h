#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_MapTrailEntry {
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class** type_info = (app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class**)(modloader::win::memory::resolve_rva(0x0471EC90));
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAreaMapInformation_MapTrailEntry__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation", "MapTrailEntry");
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_MapTrailEntry>(get_class());
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array>(get_class(), size);
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array* create_array(const std::vector<app::PlayerUberStateAreaMapInformation_MapTrailEntry*>& items) {
            return il2cpp::array_new<app::PlayerUberStateAreaMapInformation_MapTrailEntry__Array>(get_class(), items);
        }
    } // namespace PlayerUberStateAreaMapInformation_MapTrailEntry
} // namespace app::classes::types

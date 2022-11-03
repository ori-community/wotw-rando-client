#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_MapTrailEntryPool {
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class** type_info = (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class**)(modloader::win::memory::resolve_rva(0x04784F98));
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation", "MapTrailEntryPool");
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_MapTrailEntryPool>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation_MapTrailEntryPool
} // namespace app::classes::types

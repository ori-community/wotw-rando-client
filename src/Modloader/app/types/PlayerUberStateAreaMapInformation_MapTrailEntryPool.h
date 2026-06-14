#pragma once
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntryPool.h>
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_MapTrailEntryPool {
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class** type_info() {
            static app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class**)(modloader::win::memory::resolve_rva(0x04784F98));
            }
            return cache;
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAreaMapInformation_MapTrailEntryPool__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation", "MapTrailEntryPool");
        }
        inline app::PlayerUberStateAreaMapInformation_MapTrailEntryPool* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_MapTrailEntryPool>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation_MapTrailEntryPool
} // namespace app::classes::types

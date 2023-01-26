#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntry.h>
#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntryPool.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation_MapTrailEntryPool {
    IL2CPP_REGISTER_METHOD(0x00F37DA0, app::PlayerUberStateAreaMapInformation_MapTrailEntry*, GetEntry, (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F37F20, void, ReturnToPool, (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool * this_ptr, app::PlayerUberStateAreaMapInformation_MapTrailEntry* entry))
    IL2CPP_REGISTER_METHOD(0x00F37FC0, void, ctor, (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool * this_ptr))
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation_MapTrailEntryPool

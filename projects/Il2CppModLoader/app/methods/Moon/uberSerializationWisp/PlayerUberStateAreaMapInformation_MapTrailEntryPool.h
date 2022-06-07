#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation_MapTrailEntryPool {
    IL2CPP_REGISTER_METHOD(0x00F37DA0, app::PlayerUberStateAreaMapInformation_MapTrailEntry *, GetEntry, (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F37F20, void, ReturnToPool, (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool * this_ptr, app::PlayerUberStateAreaMapInformation_MapTrailEntry * entry))
    IL2CPP_REGISTER_METHOD(0x00F37FC0, void, ctor, (app::PlayerUberStateAreaMapInformation_MapTrailEntryPool * this_ptr))
}

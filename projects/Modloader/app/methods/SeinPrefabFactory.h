#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinPrefabFactory.h>
#include <Modloader/app/structs/SeinCharacter.h>

namespace app::classes::SeinPrefabFactory {
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetReferenceToSein, (app::SeinPrefabFactory * this_ptr, app::SeinCharacter* sein))
    IL2CPP_REGISTER_METHOD(0x005CC5F0, void, Awake, (app::SeinPrefabFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::SeinPrefabFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CF710, void, EnsureRightPrefabsAreThereForAbilities, (app::SeinPrefabFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D04F0, void, PushState, (app::SeinPrefabFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0590, void, PopState, (app::SeinPrefabFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0630, void, ctor, (app::SeinPrefabFactory * this_ptr))
} // namespace app::classes::SeinPrefabFactory

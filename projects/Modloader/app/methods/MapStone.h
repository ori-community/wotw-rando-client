#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MapStone.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::MapStone {
    IL2CPP_REGISTER_METHOD(0x00A09730, void, Awake, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A097A0, void, FindWorldArea, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A09940, void, Start, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A09B70, bool, get_OriHasTargets, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A09C90, void, Highlight, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0A120, void, Unhighlight, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0A3B0, void, OnDisable, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0A3D0, bool, get_Activated, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0A3E0, void, Serialize, (app::MapStone * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00A0A470, float, get_DistanceToSein, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0A620, void, FixedUpdate, (app::MapStone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0AB40, void, ctor, (app::MapStone * this_ptr))
} // namespace app::classes::MapStone

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::Quest {
    IL2CPP_REGISTER_METHOD(0x00E855A0, bool, get_ShownOnMapByTimeline, (app::Quest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E855B0, void, set_ShownOnMapByTimeline, (app::Quest * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00E870F0, app::IGenericUberState*, get_UberState, (app::Quest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E87210, app::Quest*, get_LastInChain, (app::Quest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E872F0, app::Texture2D*, GetIcon, (app::Quest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E873C0, void, ctor, (app::Quest * this_ptr))
} // namespace app::classes::Quest

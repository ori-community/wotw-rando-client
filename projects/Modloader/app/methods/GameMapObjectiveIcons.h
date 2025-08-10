#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapObjectiveIcons.h>

namespace app::classes::GameMapObjectiveIcons {
    IL2CPP_REGISTER_METHOD(0x0069DD30, void, ShowIcons, app::GameMapObjectiveIcons* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069DE50, void, HideIcons, app::GameMapObjectiveIcons* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069DF70, void, Advance, app::GameMapObjectiveIcons* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::GameMapObjectiveIcons* this_ptr)
} // namespace app::classes::GameMapObjectiveIcons

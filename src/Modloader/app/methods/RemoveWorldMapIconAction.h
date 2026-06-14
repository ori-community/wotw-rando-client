#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RemoveWorldMapIconAction.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon.h>

namespace app::classes::RemoveWorldMapIconAction {
    IL2CPP_REGISTER_METHOD(0x008FD550, void, Perform, app::RemoveWorldMapIconAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::RemoveWorldMapIconAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008FD7F0, bool, _Perform_b__1_0, app::RemoveWorldMapIconAction* this_ptr, app::RuntimeWorldMapIcon* a)
} // namespace app::classes::RemoveWorldMapIconAction

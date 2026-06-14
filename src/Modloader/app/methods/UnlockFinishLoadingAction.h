#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/UnlockFinishLoadingAction.h>

namespace app::classes::UnlockFinishLoadingAction {
    IL2CPP_REGISTER_METHOD(0x013AC3C0, void, Perform, app::UnlockFinishLoadingAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x013AC3D0, void, UnlockFinishLoading, )
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::UnlockFinishLoadingAction* this_ptr)
} // namespace app::classes::UnlockFinishLoadingAction

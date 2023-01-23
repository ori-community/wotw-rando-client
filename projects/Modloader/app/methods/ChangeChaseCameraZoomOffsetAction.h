#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ChangeChaseCameraZoomOffsetAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ChangeChaseCameraZoomOffsetAction {
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_IsPerforming, (app::ChangeChaseCameraZoomOffsetAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010454E0, void, Perform, (app::ChangeChaseCameraZoomOffsetAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::ChangeChaseCameraZoomOffsetAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010455C0, void, Update, (app::ChangeChaseCameraZoomOffsetAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010457A0, void, ctor, (app::ChangeChaseCameraZoomOffsetAction * this_ptr))
} // namespace app::classes::ChangeChaseCameraZoomOffsetAction

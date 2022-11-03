#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RecordXboxDVRAction {
    IL2CPP_REGISTER_METHOD(0x00735FA0, void, Perform, (app::RecordXboxDVRAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00736080, app::String*, GetXboxOneDRVID, (app::RecordXboxDVRAction * this_ptr, app::RecordXboxDVRAction_XboxOneDVRID__Enum id))
    IL2CPP_REGISTER_METHOD(0x00736140, void, ctor, (app::RecordXboxDVRAction * this_ptr))
} // namespace app::classes::RecordXboxDVRAction

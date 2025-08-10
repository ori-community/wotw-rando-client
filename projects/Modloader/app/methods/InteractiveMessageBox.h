#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractiveMessageBox.h>
#include <Modloader/app/structs/InteractiveMessageBox_State__Enum.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::InteractiveMessageBox {
    IL2CPP_REGISTER_METHOD(0x0063BC90, void, Awake, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063BD50, void, OnDestroy, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063BDF0, bool, get_OnButtonPressed, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063BF40, void, FinishWriting, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063C150, void, UpdateWriting, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063C330, void, EndMessageBox, app::InteractiveMessageBox* this_ptr, app::MessageBox_HideAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0063C5B0, void, Complete, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063C780, bool, get_FinishedWriting, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063C790, void, UpdateComplete, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063CA70, void, Start, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063CBB0, void, ChangeState, app::InteractiveMessageBox* this_ptr, app::InteractiveMessageBox_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x0063CD30, void, FixedUpdate, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063CDC0, void, StartMessageSound, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063D000, void, StopMessageSound, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsSuspended, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsSuspended, app::InteractiveMessageBox* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0063D090, app::SuspendableMask__Enum, get_Mask, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0063D0A0, void, set_Mask, app::InteractiveMessageBox* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0063D160, void, ctor, app::InteractiveMessageBox* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::InteractiveMessageBox

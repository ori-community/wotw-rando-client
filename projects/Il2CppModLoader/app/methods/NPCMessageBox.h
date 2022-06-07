#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::NPCMessageBox {
    IL2CPP_REGISTER_METHOD(0x00880590, void, Awake, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00880650, void, OnDestroy, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008806F0, void, UpdateWriting, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00880910, void, UpdateComplete, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00880CF0, void, EndMessageBox, (app::NPCMessageBox * this_ptr, app::Action * action))
    IL2CPP_REGISTER_METHOD(0x00880F20, void, Start, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881060, void, ChangeState, (app::NPCMessageBox * this_ptr, app::NPCMessageBox_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00881070, void, FixedUpdate, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881110, void, LayoutButtons, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881430, void, LayoutButton, (app::NPCMessageBox * this_ptr, app::InteractionBinding * interaction_binding, app::GameObject * button))
    IL2CPP_REGISTER_METHOD(0x008818C0, void, StartMessageSound, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881B00, void, StopMessageSound, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_IsSuspended, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00603D70, void, set_IsSuspended, (app::NPCMessageBox * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00881B70, app::SuspendableMask__Enum, get_Mask, (app::NPCMessageBox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881B80, void, set_Mask, (app::NPCMessageBox * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00881C40, void, ctor, (app::NPCMessageBox * this_ptr))
}

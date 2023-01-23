#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TextBoxMessage.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::TextBoxMessage {
    IL2CPP_REGISTER_METHOD(0x010E4770, bool, get_OnButtonPressed, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E4830, bool, get_Active, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E4830, bool, get_IsInactive, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsSuspended, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD920, void, set_IsSuspended, (app::TextBoxMessage * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00855600, app::SuspendableMask__Enum, get_Mask, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E4870, void, set_Mask, (app::TextBoxMessage * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x010E4930, void, add_OnCompleteEvent, (app::TextBoxMessage * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x010E4A20, void, remove_OnCompleteEvent, (app::TextBoxMessage * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x010E4B10, void, AddLine, (app::TextBoxMessage * this_ptr, app::String* text))
    IL2CPP_REGISTER_METHOD(0x010E4BB0, void, Awake, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E5500, void, OnDestroy, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E55A0, void, Initialize, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E5890, void, EnterInactive, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047167F0, TextBoxMessage_EnterInactive__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E5970, app::Byte__Array*, StringToByteArray, (app::String * hex))
    IL2CPP_REGISTER_METHOD(0x010E5DC0, void, OnEnterWriting, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471FE70, TextBoxMessage_OnEnterWriting__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E6500, void, PlayOriSpeech, (app::TextBoxMessage * this_ptr, int32_t text_length))
    IL2CPP_REGISTER_METHOD(0x010E6650, void, StopOriSpeech, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E6880, void, OnEnterComplete, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727940, TextBoxMessage_OnEnterComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E69C0, void, OnExitComplete, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790790, TextBoxMessage_OnExitComplete__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitWriting, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759588, TextBoxMessage_OnExitWriting__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E6B00, void, UpdateWriting, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743110, TextBoxMessage_UpdateWriting__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E6DA0, void, UpdateCompleted, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CF40, TextBoxMessage_UpdateCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010E6EA0, void, StopWriting, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E7050, void, ReadNextLine, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E7120, void, FixedUpdate, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E7200, void, StartWriting, (app::TextBoxMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E7380, void, ctor, (app::TextBoxMessage * this_ptr))
} // namespace app::classes::TextBoxMessage

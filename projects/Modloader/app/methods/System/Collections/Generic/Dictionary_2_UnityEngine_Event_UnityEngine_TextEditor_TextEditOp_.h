#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_.h>
#include <Modloader/app/structs/Event.h>
#include <Modloader/app/structs/TextEditor_TextEditOp__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_ * this_ptr, app::Event* key))
    IL2CPP_REGISTER_METHOD(0x02BCF4F0, app::TextEditor_TextEditOp__Enum, get_Item, (app::Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_ * this_ptr, app::Event* key))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_ * this_ptr, app::Event* key, app::TextEditor_TextEditOp__Enum value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Event_UnityEngine_TextEditor_TextEditOp_

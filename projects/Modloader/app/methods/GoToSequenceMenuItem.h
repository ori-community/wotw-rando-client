#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GoToSequenceMenuItem.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/GoToSequenceData.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GoToSequenceMenuItem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800000, void, ctor_2, (app::GoToSequenceMenuItem * this_ptr, app::String* path, app::GoToSequenceData* go_to_sequence_data))
    IL2CPP_REGISTER_METHOD(0x00800030, bool, Draw, (app::GoToSequenceMenuItem * this_ptr, app::Rect rect, bool selected))
    IL2CPP_REGISTER_METHOD(0x008001B0, void, OnSelected, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008001C0, void, OnSelectedFixedUpdate, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Func_1_String_*, get_DynamicText, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_DynamicText, (app::GoToSequenceMenuItem * this_ptr, app::Func_1_String_* value))
    IL2CPP_REGISTER_METHOD(0x008002F0, void, Action, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Text, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (app::GoToSequenceMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_HelpText, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_HelpText, (app::GoToSequenceMenuItem * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Path, (app::GoToSequenceMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Path, (app::GoToSequenceMenuItem * this_ptr, app::String* value))
} // namespace app::classes::GoToSequenceMenuItem

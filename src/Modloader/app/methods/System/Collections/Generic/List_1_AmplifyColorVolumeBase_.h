#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmplifyColorVolumeBase.h>
#include <Modloader/app/structs/List_1_AmplifyColorVolumeBase_.h>

namespace app::classes::System::Collections::Generic::List_1_AmplifyColorVolumeBase_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_AmplifyColorVolumeBase_* this_ptr, app::AmplifyColorVolumeBase* item)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_AmplifyColorVolumeBase_* this_ptr, int32_t index, app::AmplifyColorVolumeBase* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_AmplifyColorVolumeBase_* this_ptr, app::AmplifyColorVolumeBase* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AmplifyColorVolumeBase*, get_Item, app::List_1_AmplifyColorVolumeBase_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_AmplifyColorVolumeBase_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_AmplifyColorVolumeBase_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_AmplifyColorVolumeBase_

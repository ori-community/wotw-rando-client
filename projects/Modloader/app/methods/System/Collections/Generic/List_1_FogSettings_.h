#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FogSettings.h>
#include <Modloader/app/structs/List_1_FogSettings_.h>

namespace app::classes::System::Collections::Generic::List_1_FogSettings_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_FogSettings_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::FogSettings*, get_Item, app::List_1_FogSettings_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_FogSettings_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_FogSettings_

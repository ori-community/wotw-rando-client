#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_.h>
#include <Modloader/app/structs/Data.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Data {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_*, get_properties, (app::Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_properties, (app::Data * this_ptr, app::Dictionary_2_System_String_Microsoft_Applications_Events_DataModels_Value_* value))
    IL2CPP_REGISTER_METHOD(0x002FC790, void, ctor_1, (app::Data * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC950, void, ctor_2, (app::Data * this_ptr, app::String* full_name, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FCAC0, void, Release, (app::Data * this_ptr))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Data

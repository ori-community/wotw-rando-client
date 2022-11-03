#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Protocol {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_metadataCrc, (app::Protocol * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_metadataCrc, (app::Protocol * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_List_1_System_String_*, get_ticketKeys, (app::Protocol * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ticketKeys, (app::Protocol * this_ptr, app::List_1_List_1_System_String_* value))
    IL2CPP_REGISTER_METHOD(0x002FD340, void, ctor_1, (app::Protocol * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::Protocol * this_ptr, app::String* full_name, app::String* name))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Protocol

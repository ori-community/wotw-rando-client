#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::Attributes {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_Microsoft_Applications_Events_DataModels_PII_ *, get_pii, (app::Attributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_pii, (app::Attributes * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_PII_ * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_Microsoft_Applications_Events_DataModels_CustomerContent_ *, get_customerContent, (app::Attributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_customerContent, (app::Attributes * this_ptr, app::List_1_Microsoft_Applications_Events_DataModels_CustomerContent_ * value))
    IL2CPP_REGISTER_METHOD(0x002FBA80, void, ctor_1, (app::Attributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::Attributes * this_ptr, app::String * full_name, app::String * name))
    IL2CPP_REGISTER_METHOD(0x002FBAF0, void, Release, (app::Attributes * this_ptr))
}

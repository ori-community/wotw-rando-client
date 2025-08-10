#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Sdk.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Sdk {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_libVer, app::Sdk* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_libVer, app::Sdk* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_epoch, app::Sdk* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_epoch, app::Sdk* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_seq, app::Sdk* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_seq, app::Sdk* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_installId, app::Sdk* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_installId, app::Sdk* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Sdk* this_ptr)
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Sdk

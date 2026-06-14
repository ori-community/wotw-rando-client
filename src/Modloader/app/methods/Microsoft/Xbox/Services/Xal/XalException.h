#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XalException.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalException {
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ErrorCode, app::XalException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C9740, void, set_ErrorCode, app::XalException* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01435830, app::String*, get_Message, app::XalException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01435940, void, ctor, app::XalException* this_ptr, int32_t error_code)
} // namespace app::classes::Microsoft::Xbox::Services::Xal::XalException

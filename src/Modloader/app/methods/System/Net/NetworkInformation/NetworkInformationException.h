#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NetworkInformationException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Net::NetworkInformation::NetworkInformationException {
    IL2CPP_REGISTER_METHOD(0x01BC9610, void, ctor_1, app::NetworkInformationException* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01BC9710,
        void,
        ctor_2,
        app::NetworkInformationException* this_ptr,
        app::SerializationInfo* serialization_info,
        app::StreamingContext streaming_context
    )
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ErrorCode, app::NetworkInformationException* this_ptr)
} // namespace app::classes::System::Net::NetworkInformation::NetworkInformationException

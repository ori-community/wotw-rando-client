#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MissingMemberException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::MissingMemberException {
    IL2CPP_REGISTER_METHOD(0x0226A340, void, ctor_1, app::MissingMemberException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0226A3D0, void, ctor_2, app::MissingMemberException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x0226A3F0, void, ctor_3, app::MissingMemberException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x0226A560, app::String*, get_Message, app::MissingMemberException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0173D7D0, app::String*, FormatSignature, app::Byte__Array* signature)
    IL2CPP_REGISTER_METHOD(0x0226A6D0, void, GetObjectData, app::MissingMemberException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::MissingMemberException

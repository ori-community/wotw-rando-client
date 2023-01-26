#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IOException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::IOException {
    IL2CPP_REGISTER_METHOD(0x0236FF50, void, ctor_1, (app::IOException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0236FFE0, void, ctor_2, (app::IOException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A93D50, void, ctor_3, (app::IOException * this_ptr, app::String* message, int32_t hresult))
    IL2CPP_REGISTER_METHOD(0x02370000, void, ctor_4, (app::IOException * this_ptr, app::String* message, int32_t hresult, app::String* maybe_full_path))
    IL2CPP_REGISTER_METHOD(0x02370040, void, ctor_5, (app::IOException * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_6, (app::IOException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::IO::IOException

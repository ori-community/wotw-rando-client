#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DllNotFoundException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::DllNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01A0FAC0, void, ctor_1, (app::DllNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A0FB50, void, ctor_2, (app::DllNotFoundException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FB70, void, ctor_3, (app::DllNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::DllNotFoundException

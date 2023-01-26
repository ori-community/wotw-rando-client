#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntryPointNotFoundException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::EntryPointNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01A10CC0, void, ctor_1, (app::EntryPointNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A10D50, void, ctor_2, (app::EntryPointNotFoundException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FB70, void, ctor_3, (app::EntryPointNotFoundException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::EntryPointNotFoundException

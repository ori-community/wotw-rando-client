#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectoryNotFoundException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::DirectoryNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01E05080, void, ctor_1, app::DirectoryNotFoundException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E05110, void, ctor_2, app::DirectoryNotFoundException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, app::DirectoryNotFoundException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::IO::DirectoryNotFoundException

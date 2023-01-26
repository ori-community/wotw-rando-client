#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OpenWriteCompletedEventArgs.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>

namespace app::classes::System::Net::OpenWriteCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::OpenWriteCompletedEventArgs * this_ptr, app::Stream* result, app::Exception* exception, bool cancelled, app::Object* user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Stream*, get_Result, (app::OpenWriteCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCB2D0, void, ctor_2, (app::OpenWriteCompletedEventArgs * this_ptr))
} // namespace app::classes::System::Net::OpenWriteCompletedEventArgs

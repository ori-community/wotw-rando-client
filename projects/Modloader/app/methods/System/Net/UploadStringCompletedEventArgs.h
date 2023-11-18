#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UploadStringCompletedEventArgs.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::UploadStringCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::UploadStringCompletedEventArgs * this_ptr, app::String* result, app::Exception* exception, bool cancelled, app::Object* user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::String*, get_Result, (app::UploadStringCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ACFF0, void, ctor_2, (app::UploadStringCompletedEventArgs * this_ptr))
} // namespace app::classes::System::Net::UploadStringCompletedEventArgs

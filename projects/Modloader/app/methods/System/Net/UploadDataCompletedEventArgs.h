#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UploadDataCompletedEventArgs.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::UploadDataCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::UploadDataCompletedEventArgs * this_ptr, app::Byte__Array* result, app::Exception* exception, bool cancelled, app::Object* user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Byte__Array*, get_Result, (app::UploadDataCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ACF10, void, ctor_2, (app::UploadDataCompletedEventArgs * this_ptr))
} // namespace app::classes::System::Net::UploadDataCompletedEventArgs

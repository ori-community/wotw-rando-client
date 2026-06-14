#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DownloadStringCompletedEventArgs.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::DownloadStringCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(
        0x01BCB240,
        void,
        ctor_1,
        app::DownloadStringCompletedEventArgs* this_ptr,
        app::String* result,
        app::Exception* exception,
        bool cancelled,
        app::Object* user_token
    )
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::String*, get_Result, app::DownloadStringCompletedEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB40B0, void, ctor_2, app::DownloadStringCompletedEventArgs* this_ptr)
} // namespace app::classes::System::Net::DownloadStringCompletedEventArgs

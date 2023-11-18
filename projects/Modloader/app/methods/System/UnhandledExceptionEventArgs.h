#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnhandledExceptionEventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::UnhandledExceptionEventArgs {
    IL2CPP_REGISTER_METHOD(0x027C5BD0, void, ctor, (app::UnhandledExceptionEventArgs * this_ptr, app::Object* exception, bool is_terminating))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_ExceptionObject, (app::UnhandledExceptionEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsTerminating, (app::UnhandledExceptionEventArgs * this_ptr))
} // namespace app::classes::System::UnhandledExceptionEventArgs

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExceptionEventArgs.h>
#include <Modloader/app/structs/Exception.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs {
    IL2CPP_REGISTER_METHOD(0x01DD9AD0, void, ctor, (app::ExceptionEventArgs * this_ptr, app::Exception* exception))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Exception*, get_Exception, (app::ExceptionEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Exception, (app::ExceptionEventArgs * this_ptr, app::Exception* value))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExceptionEventArgs

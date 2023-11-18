#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TraceSource.h>

namespace app::classes::System::Net::TraceSource {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TraceSource * this_ptr))
}

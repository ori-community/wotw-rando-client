#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnProjectStartup.h>

namespace app::classes::OnProjectStartup {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::OnProjectStartup* this_ptr)
}

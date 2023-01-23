#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WontSurviveAssemblyReload.h>

namespace app::classes::WontSurviveAssemblyReload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WontSurviveAssemblyReload * this_ptr))
}

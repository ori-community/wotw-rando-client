#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UnhandledExceptionEventArgs.h>

namespace app::classes::UnityEngine::UnhandledExceptionHandler {
    IL2CPP_REGISTER_METHOD(0x02C70720, void, RegisterUECatcher, )
    IL2CPP_REGISTER_METHOD(0x02C709B0, void, _RegisterUECatcher_m__0, app::Object* sender, app::UnhandledExceptionEventArgs* e)
} // namespace app::classes::UnityEngine::UnhandledExceptionHandler

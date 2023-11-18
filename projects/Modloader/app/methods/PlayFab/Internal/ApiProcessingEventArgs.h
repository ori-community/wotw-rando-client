#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ApiProcessingEventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::Internal::ApiProcessingEventArgs {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ApiProcessingEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015800D0, app::Object*, GetRequest, (app::ApiProcessingEventArgs * this_ptr))
} // namespace app::classes::PlayFab::Internal::ApiProcessingEventArgs

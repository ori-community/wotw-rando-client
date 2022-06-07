#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::Internal::ApiProcessingEventArgs {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ApiProcessingEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015800D0, app::Object *, GetRequest, (app::ApiProcessingEventArgs * this_ptr))
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Context {
    IL2CPP_REGISTER_METHOD(0x011E77D0, void, SendContextToGameObject, (app::GameObject * target, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011E79B0, void, SendContextToGameObjectAndChildren, (app::GameObject * target, app::IContext * context))
}

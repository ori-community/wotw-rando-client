#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Context {
    IL2CPP_REGISTER_METHOD(0x011E77D0, void, SendContextToGameObject, (app::GameObject * target, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011E79B0, void, SendContextToGameObjectAndChildren, (app::GameObject * target, app::IContext* context))
} // namespace app::classes::Context

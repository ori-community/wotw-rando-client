#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SoundHost.h>

namespace app::classes::GizmoSystem {
    IL2CPP_REGISTER_METHOD(0x01549B60, void, Render_1, app::Object* subject, app::GameObject* context)
    IL2CPP_REGISTER_METHOD(0x01549B60, void, Render_2, app::SoundHost* subject, app::GameObject* context)
} // namespace app::classes::GizmoSystem

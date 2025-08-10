#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/SendMouseEvents_HitInfo.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::SendMouseEvents {
    IL2CPP_REGISTER_METHOD(0x0297B270, void, SetMouseMoved, )
    IL2CPP_REGISTER_METHOD(0x0297B310, void, HitTestLegacyGUI, app::Camera* camera, app::Vector3 mouse_position, app::SendMouseEvents_HitInfo* hit_info)
    IL2CPP_REGISTER_METHOD(0x0297B4C0, void, DoSendMouseEvents, int32_t skip_r_t_cameras)
    IL2CPP_REGISTER_METHOD(0x0297C3D0, void, SendEvents, int32_t i, app::SendMouseEvents_HitInfo hit)
    IL2CPP_REGISTER_METHOD(0x0297CC00, void, cctor, )
} // namespace app::classes::UnityEngine::SendMouseEvents

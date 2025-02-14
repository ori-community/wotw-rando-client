#include <Modloader/app/methods/MaintainAspectRatio.h>
#include <Modloader/app/methods/UnityEngine/Camera.h>
#include <Modloader/interception_macros.h>

namespace {
    using namespace app::classes;

    IL2CPP_INTERCEPT(MaintainAspectRatio, void, LateUpdate, (app::MaintainAspectRatio* this_ptr)) {
        UnityEngine::Camera::set_rect(this_ptr->fields.m_camera, app::Rect(0.f, 0.f, 1.f, 1.f));
    }Ig
}

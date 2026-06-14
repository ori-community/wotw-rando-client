#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonShadingZoneTarget.h>
#include <Modloader/app/structs/LightCanvasShadingZone.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LightCanvasShadingZone {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_LightCanvasShadingZoneSelected, )
    IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, get_ShadingZoneId, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsDirtyEditor, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsDirtyEditor, app::LightCanvasShadingZone* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01148460, bool, get_IsActive, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011485E0, void, OnValidate, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011485F0, void, OnEnable, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01148870, void, OnDisable, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01148910, void, GetCanvases, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011489B0, void, RefreshBounds, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01148AF0, bool, ContainsPoint, app::LightCanvasShadingZone* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01148B80, void, OnTargetEnter, app::LightCanvasShadingZone* this_ptr, app::IMoonShadingZoneTarget* target)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTargetStay, app::LightCanvasShadingZone* this_ptr, app::IMoonShadingZoneTarget* target, float delta_time)
    IL2CPP_REGISTER_METHOD(0x01148DE0, void, OnTargetExit, app::LightCanvasShadingZone* this_ptr, app::IMoonShadingZoneTarget* target)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEditorUpdate, app::LightCanvasShadingZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01148F60, void, ctor, app::LightCanvasShadingZone* this_ptr)
} // namespace app::classes::LightCanvasShadingZone

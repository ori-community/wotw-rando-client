#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonShadingZoneController.h>
#include <Modloader/app/structs/IMoonShadingZone.h>
#include <Modloader/app/structs/IMoonShadingZoneTarget.h>
#include <Modloader/app/structs/MoonShadingZoneController_TargetData.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::MoonShadingZoneController {
    IL2CPP_REGISTER_METHOD(0x0145FFA0, app::MoonShadingZoneController*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateType__Enum, get_UpdateType, (app::MoonShadingZoneController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01460290, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01460460, void, RegisterShadingZone, (app::IMoonShadingZone * shading_zone))
    IL2CPP_REGISTER_METHOD(0x01460520, void, UnregisterShadingZone, (app::IMoonShadingZone * shading_zone))
    IL2CPP_REGISTER_METHOD(0x01460730, void, OnShadingZoneUnregistered, (app::MoonShadingZoneController * this_ptr, app::IMoonShadingZone* shading_zone))
    IL2CPP_REGISTER_METHOD(0x01460880, void, OnUpdate, (app::MoonShadingZoneController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x014608C0, void, UpdateTargetsOutsideZones, (app::MoonShadingZoneController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01460A50, void, UpdateTargetsInsideZones, (app::MoonShadingZoneController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01460C90, int32_t, GetNextInsideTargetIndex, (app::MoonShadingZoneController * this_ptr, bool* found))
    IL2CPP_REGISTER_METHOD(0x01460E10, void, UpdateTarget, (app::MoonShadingZoneController * this_ptr, app::MoonShadingZoneController_TargetData* target, float delta))
    IL2CPP_REGISTER_METHOD(0x01461160, void, EditorUpdate, ())
    IL2CPP_REGISTER_METHOD(0x01461210, void, OnTargetEnter, (app::MoonShadingZoneController * this_ptr, app::MoonShadingZoneController_TargetData* data, app::IMoonShadingZone* zone))
    IL2CPP_REGISTER_METHOD(0x014612D0, void, OnTargetStay, (app::MoonShadingZoneController * this_ptr, app::MoonShadingZoneController_TargetData* data, float delta_time))
    IL2CPP_REGISTER_METHOD(0x014613A0, void, OnTargetExit, (app::MoonShadingZoneController * this_ptr, app::MoonShadingZoneController_TargetData* data))
    IL2CPP_REGISTER_METHOD(0x01461450, void, Register, (app::MoonShadingZoneController * this_ptr, app::IMoonShadingZoneTarget* target))
    IL2CPP_REGISTER_METHOD(0x01461620, void, UnRegister, (app::MoonShadingZoneController * this_ptr, app::IMoonShadingZoneTarget* target))
    IL2CPP_REGISTER_METHOD(0x01461780, bool, CanRendererBeAffectedByZones, (app::MoonShadingZoneController * this_ptr, app::Renderer* renderer))
    IL2CPP_REGISTER_METHOD(0x01461820, void, ctor, (app::MoonShadingZoneController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01461A70, void, cctor, ())
} // namespace app::classes::MoonShadingZoneController

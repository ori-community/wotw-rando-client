#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RecorderOutputAnimatorEntity.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Timeline::RecorderOutputAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x0077EA90, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0077EB30, bool, get_IsShotToBeRecorded, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateCategory__Enum, get_UpdateCategory, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077EBF0, void, EnterSampling, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitSampling, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Heartbeat, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077ECD0, void, OnStartPlayback, (app::RecorderOutputAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077F280, void, OnUpdateEntity, (app::RecorderOutputAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0077F360, void, OnRecordingFinished, (app::RecorderOutputAnimatorEntity * this_ptr, int32_t captured_frames))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_ShotName, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077F730, int32_t, get_InstanceId, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00653F90, bool, get_SpawnEnemies, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077F7B0, void, ctor, (app::RecorderOutputAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0077F870, void, cctor, ())
} // namespace app::classes::Moon::Timeline::RecorderOutputAnimatorEntity

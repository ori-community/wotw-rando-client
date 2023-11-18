#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/AnimationMetaData_AnimationData.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::AnimationMetaData_AnimationData {
    IL2CPP_REGISTER_METHOD(0x004FDAA0, app::Vector3, GetPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FDB50, app::Vector3, GetPositionAtFrame, (app::AnimationMetaData_AnimationData * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x004FDBF0, app::Vector3, GetRawPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FDCA0, app::Vector3, GetRawPositionAtFrame, (app::AnimationMetaData_AnimationData * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x004FDD40, app::Vector2, GetSpeedAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FDEA0, app::Vector2, GetRawSpeedAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FE000, app::Vector3, GetDeltaPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FE240, app::Vector3, GetRawDeltaPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FE480, void, ctor, (app::AnimationMetaData_AnimationData * this_ptr))
} // namespace app::classes::AnimationMetaData_AnimationData

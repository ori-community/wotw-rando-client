#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AnimationMetaData {
    IL2CPP_REGISTER_METHOD(0x004FCA50, int32_t, get_FrameCount, (app::AnimationMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FCA60, void, set_FrameCount, (app::AnimationMetaData * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x004FCA70, void, Mirror, (app::AnimationMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FCEE0, app::AnimationMetaData_AnimationData*, FindData, (app::AnimationMetaData * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x004FD130, void, Process, (app::AnimationMetaData * this_ptr, app::GameObject* model))
    IL2CPP_REGISTER_METHOD(0x004FD740, void, ctor, (app::AnimationMetaData * this_ptr))
} // namespace app::classes::AnimationMetaData

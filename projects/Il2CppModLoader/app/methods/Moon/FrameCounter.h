#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::FrameCounter {
    IL2CPP_REGISTER_METHOD(0x01489790, void, Awake, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01489830, void, OnDestroy, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01489AB0, void, Initialize, (app::FrameCounter_1 * this_ptr, app::IProfilingDataProvider* data_provider))
    IL2CPP_REGISTER_METHOD(0x01489DD0, void, _preEndFrame, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744280, FrameCounter_1__preEndFrame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01489DE0, void, _checkExceedSecondBoundary, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01489E60, bool, _tick, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148A230, void, _handlePauseResume, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148A3B0, void, _handleProfilerWrap, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148A4D0, void, _advanceToNextSecond, (app::FrameCounter_1 * this_ptr, float cur_time))
    IL2CPP_REGISTER_METHOD(0x01489DD0, void, _postBeginFrame, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739030, FrameCounter_1__postBeginFrame__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0148A830, void, Update, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148A8B0, void, FixedUpdate, (app::FrameCounter_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0148A930, int32_t, GetSecondIndexForProfilerFrame, (app::FrameCounter_1 * this_ptr, int32_t frame_index))
    IL2CPP_REGISTER_METHOD(0x0148A9B0, app::FrameCounter_SecondInfo*, GetSecondById, (app::FrameCounter_1 * this_ptr, int32_t second_id))
    IL2CPP_REGISTER_METHOD(0x0148AA20, void, ctor, (app::FrameCounter_1 * this_ptr))
} // namespace app::classes::Moon::FrameCounter

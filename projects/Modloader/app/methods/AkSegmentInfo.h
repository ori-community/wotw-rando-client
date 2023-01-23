#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkSegmentInfo.h>

namespace app::classes::AkSegmentInfo {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkSegmentInfo * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x018965A0, void*, getCPtr, (app::AkSegmentInfo * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkSegmentInfo * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x01896630, void, Finalize, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018966B0, void, Dispose, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018968C0, void, set_iCurrentPosition, (app::AkSegmentInfo * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x018969F0, int32_t, get_iCurrentPosition, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01896B10, void, set_iPreEntryDuration, (app::AkSegmentInfo * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01896C40, int32_t, get_iPreEntryDuration, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01896D60, void, set_iActiveDuration, (app::AkSegmentInfo * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01896E90, int32_t, get_iActiveDuration, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01896FB0, void, set_iPostExitDuration, (app::AkSegmentInfo * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x018970E0, int32_t, get_iPostExitDuration, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01897200, void, set_iRemainingLookAheadTime, (app::AkSegmentInfo * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01897330, int32_t, get_iRemainingLookAheadTime, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01897450, void, set_fBeatDuration, (app::AkSegmentInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01897580, float, get_fBeatDuration, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018976A0, void, set_fBarDuration, (app::AkSegmentInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x018977D0, float, get_fBarDuration, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018978F0, void, set_fGridDuration, (app::AkSegmentInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01897A20, float, get_fGridDuration, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01897B40, void, set_fGridOffset, (app::AkSegmentInfo * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01897C70, float, get_fGridOffset, (app::AkSegmentInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01897D90, void, ctor_2, (app::AkSegmentInfo * this_ptr))
} // namespace app::classes::AkSegmentInfo

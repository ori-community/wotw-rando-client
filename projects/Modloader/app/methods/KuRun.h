#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KuRun {
    IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_RunSquashFloat, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_RunSquashFloat, (app::KuRun * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x003FD740, float, get_RunSquashAmout, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E3B30, void, set_RunSquashAmout, (app::KuRun * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01245C30, void, OnSetReferenceToKu, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01236310, void, OnExit, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01245C60, void, UpdateState, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012460D0, bool, ShouldPlayRun, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246350, void, HandleFootstepEvents, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246630, bool, ShouldAndIsRunning, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246660, bool, get_HasStartedTurning, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012466A0, bool, get_HasFinishedTurning, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012466C0, void, Turn, (app::KuRun * this_ptr, bool face_left))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_WantsToFaceLeft, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AD920, void, set_WantsToFaceLeft, (app::KuRun * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x012365B0, bool, get_ShouldInterruptTurning, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246700, bool, get_IsCancellable, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246730, void, InterruptTurning, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246760, void, ctor, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01246780, bool, _UpdateState_b__21_0, (app::KuRun * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A3F8, KuRun__UpdateState_b__21_0__MethodInfo)
} // namespace app::classes::KuRun

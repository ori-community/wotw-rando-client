#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MotionAbsorb_AbsorbMotion_d_8.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::RootMotion::Demos::MotionAbsorb__AbsorbMotion_d__8 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::MotionAbsorb_AbsorbMotion_d_8* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::MotionAbsorb_AbsorbMotion_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02227D20, bool, MoveNext, app::MotionAbsorb_AbsorbMotion_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::MotionAbsorb_AbsorbMotion_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02227FB0, void, IEnumerator_Reset, app::MotionAbsorb_AbsorbMotion_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::MotionAbsorb_AbsorbMotion_d_8* this_ptr)
} // namespace app::classes::RootMotion::Demos::MotionAbsorb__AbsorbMotion_d__8

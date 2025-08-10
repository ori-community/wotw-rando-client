#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MechSpiderLeg_Step_d_24.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::RootMotion::Demos::MechSpiderLeg__Step_d__24 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::MechSpiderLeg_Step_d_24* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::MechSpiderLeg_Step_d_24* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02226860, bool, MoveNext, app::MechSpiderLeg_Step_d_24* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::MechSpiderLeg_Step_d_24* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02226E80, void, IEnumerator_Reset, app::MechSpiderLeg_Step_d_24* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::MechSpiderLeg_Step_d_24* this_ptr)
} // namespace app::classes::RootMotion::Demos::MechSpiderLeg__Step_d__24

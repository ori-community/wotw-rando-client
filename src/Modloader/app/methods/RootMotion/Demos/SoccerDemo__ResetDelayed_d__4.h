#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SoccerDemo_ResetDelayed_d_4.h>

namespace app::classes::RootMotion::Demos::SoccerDemo__ResetDelayed_d__4 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::SoccerDemo_ResetDelayed_d_4* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::SoccerDemo_ResetDelayed_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020468B0, bool, MoveNext, app::SoccerDemo_ResetDelayed_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::SoccerDemo_ResetDelayed_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02046B80, void, IEnumerator_Reset, app::SoccerDemo_ResetDelayed_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::SoccerDemo_ResetDelayed_d_4* this_ptr)
} // namespace app::classes::RootMotion::Demos::SoccerDemo__ResetDelayed_d__4

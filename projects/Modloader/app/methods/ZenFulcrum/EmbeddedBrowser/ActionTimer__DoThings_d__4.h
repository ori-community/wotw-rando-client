#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionTimer_DoThings_d_4.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ActionTimer__DoThings_d__4 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::ActionTimer_DoThings_d_4* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::ActionTimer_DoThings_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C60AD0, bool, MoveNext, app::ActionTimer_DoThings_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::ActionTimer_DoThings_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C60D40, void, IEnumerator_Reset, app::ActionTimer_DoThings_d_4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::ActionTimer_DoThings_d_4* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ActionTimer__DoThings_d__4

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CursorRendererBase_Setup_d_2.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::CursorRendererBase__Setup_d__2 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::CursorRendererBase_Setup_d_2* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::CursorRendererBase_Setup_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD1F40, bool, MoveNext, app::CursorRendererBase_Setup_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::CursorRendererBase_Setup_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD2150, void, IEnumerator_Reset, app::CursorRendererBase_Setup_d_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::CursorRendererBase_Setup_d_2* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::CursorRendererBase__Setup_d__2

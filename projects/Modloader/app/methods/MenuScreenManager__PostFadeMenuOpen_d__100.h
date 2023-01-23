#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MenuScreenManager_PostFadeMenuOpen_d_100.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::MenuScreenManager__PostFadeMenuOpen_d__100 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009E65B0, bool, MoveNext, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009E6B60, void, IEnumerator_Reset, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C638, MenuScreenManager_PostFadeMenuOpen_d_100_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::MenuScreenManager_PostFadeMenuOpen_d_100 * this_ptr))
} // namespace app::classes::MenuScreenManager__PostFadeMenuOpen_d__100

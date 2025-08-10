#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadingBootstrap_Start_d_25.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::LoadingBootstrap__Start_d__25 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::LoadingBootstrap_Start_d_25* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::LoadingBootstrap_Start_d_25* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FBE9D0, bool, MoveNext, app::LoadingBootstrap_Start_d_25* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::LoadingBootstrap_Start_d_25* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC0BD0, void, IEnumerator_Reset, app::LoadingBootstrap_Start_d_25* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::LoadingBootstrap_Start_d_25* this_ptr)
} // namespace app::classes::LoadingBootstrap__Start_d__25

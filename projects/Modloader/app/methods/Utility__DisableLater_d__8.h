#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Utility_DisableLater_d_8.h>

namespace app::classes::Utility__DisableLater_d__8 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::Utility_DisableLater_d_8* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::Utility_DisableLater_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013B76C0, bool, MoveNext, app::Utility_DisableLater_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, app::Utility_DisableLater_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013B7870, void, IEnumerator_Reset, app::Utility_DisableLater_d_8* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::Utility_DisableLater_d_8* this_ptr)
} // namespace app::classes::Utility__DisableLater_d__8

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ResourceFallbackManager_GetEnumerator_d_5.h>

namespace app::classes::System::Resources::ResourceFallbackManager__GetEnumerator_d__5 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::ResourceFallbackManager_GetEnumerator_d_5* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::ResourceFallbackManager_GetEnumerator_d_5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A84440, bool, MoveNext, app::ResourceFallbackManager_GetEnumerator_d_5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::CultureInfo*, IEnumerator_CultureInfo__get_Current, app::ResourceFallbackManager_GetEnumerator_d_5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A846F0, void, IEnumerator_Reset, app::ResourceFallbackManager_GetEnumerator_d_5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::ResourceFallbackManager_GetEnumerator_d_5* this_ptr)
} // namespace app::classes::System::Resources::ResourceFallbackManager__GetEnumerator_d__5

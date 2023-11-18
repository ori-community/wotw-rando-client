#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameplaySystemsCreator_CreateSetups_d_17.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::GameplaySystemsCreator__CreateSetups_d__17 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::GameplaySystemsCreator_CreateSetups_d_17 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::GameplaySystemsCreator_CreateSetups_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00414860, bool, MoveNext, (app::GameplaySystemsCreator_CreateSetups_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::GameplaySystemsCreator_CreateSetups_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00415E20, void, IEnumerator_Reset, (app::GameplaySystemsCreator_CreateSetups_d_17 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::GameplaySystemsCreator_CreateSetups_d_17 * this_ptr))
} // namespace app::classes::GameplaySystemsCreator__CreateSetups_d__17

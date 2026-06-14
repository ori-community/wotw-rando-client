#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_ColosseumTower_SentryStats___Boxed.h>
#include <Modloader/app/structs/ColosseumTower_SentryStats.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_ColosseumTower_SentryStats_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, app::Array_InternalEnumerator_1_ColosseumTower_SentryStats___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_ColosseumTower_SentryStats___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_ColosseumTower_SentryStats___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x001605E0,
        app::ColosseumTower_SentryStats,
        get_Current,
        app::Array_InternalEnumerator_1_ColosseumTower_SentryStats___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_ColosseumTower_SentryStats___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160620, app::Object*, IEnumerator_get_Current, app::Array_InternalEnumerator_1_ColosseumTower_SentryStats___Boxed* this_ptr)
} // namespace app::classes::System::Array_InternalEnumerator_1_ColosseumTower_SentryStats_

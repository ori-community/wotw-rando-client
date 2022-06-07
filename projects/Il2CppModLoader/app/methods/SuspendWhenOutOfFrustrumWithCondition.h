#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SuspendWhenOutOfFrustrumWithCondition {
    IL2CPP_REGISTER_METHOD(0x006753C0, bool, get_IsBlockedFromSuspending, (app::SuspendWhenOutOfFrustrumWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675450, void, AddLock, (app::SuspendWhenOutOfFrustrumWithCondition * this_ptr, app::Object_1 * locking_object))
    IL2CPP_REGISTER_METHOD(0x00675500, void, ReleaseLock, (app::SuspendWhenOutOfFrustrumWithCondition * this_ptr, app::Object_1 * locking_object))
    IL2CPP_REGISTER_METHOD(0x006755A0, void, ReleaseAllLocks, (app::SuspendWhenOutOfFrustrumWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675670, void, OnFrustumExit, (app::SuspendWhenOutOfFrustrumWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006757D0, void, ctor, (app::SuspendWhenOutOfFrustrumWithCondition * this_ptr))
}

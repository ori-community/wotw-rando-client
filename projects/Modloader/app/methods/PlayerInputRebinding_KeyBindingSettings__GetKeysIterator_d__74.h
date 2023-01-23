#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74.h>
#include <Modloader/app/structs/PlayerInputRebinding_PlayerInputKey.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IEnumerator_1_PlayerInputRebinding_PlayerInputKey_.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::PlayerInputRebinding_KeyBindingSettings__GetKeysIterator_d__74 {
    IL2CPP_REGISTER_METHOD(0x01426B00, void, ctor, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01426B60, bool, MoveNext, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::PlayerInputRebinding_PlayerInputKey, System_Collections_Generic_IEnumerator_PlayerInputRebinding_PlayerInputKey__get_Current, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01426DF0, void, IEnumerator_Reset, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475B748, PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01426E40, app::Object*, IEnumerator_get_Current, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01426ED0, app::IEnumerator_1_PlayerInputRebinding_PlayerInputKey_*, System_Collections_Generic_IEnumerable_PlayerInputRebinding_PlayerInputKey__GetEnumerator, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014270C0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::PlayerInputRebinding_KeyBindingSettings_GetKeysIterator_d_74 * this_ptr))
} // namespace app::classes::PlayerInputRebinding_KeyBindingSettings__GetKeysIterator_d__74

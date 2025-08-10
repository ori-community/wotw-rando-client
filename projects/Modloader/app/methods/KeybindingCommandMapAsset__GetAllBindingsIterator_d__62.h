#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CommandBinding.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_CommandBinding_.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_GetAllBindingsIterator_d_62.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::KeybindingCommandMapAsset__GetAllBindingsIterator_d__62 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6B970, bool, MoveNext, app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        app::CommandBinding*,
        IEnumerator_CommandBinding__get_Current,
        app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00E6BB80, void, IEnumerator_Reset, app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E6BBD0,
        app::IEnumerator_1_CommandBinding_*,
        IEnumerable_CommandBinding__GetEnumerator,
        app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00E6BDC0, app::IEnumerator*, IEnumerable_GetEnumerator, app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* this_ptr)
} // namespace app::classes::KeybindingCommandMapAsset__GetAllBindingsIterator_d__62

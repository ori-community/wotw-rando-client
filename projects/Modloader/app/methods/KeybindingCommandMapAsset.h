#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompoundButtonInput.h>
#include <Modloader/app/structs/ControlsScreen_ControlListEnum__Enum.h>
#include <Modloader/app/structs/IEnumerable_1_CommandBinding_.h>
#include <Modloader/app/structs/KeyCode__Enum__Array.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_CommandBindingEnum__Enum.h>
#include <Modloader/app/structs/List_1_CommandBinding_.h>
#include <Modloader/app/structs/List_1_KeybindingCommandMapAsset_ExclusiveCommandList_.h>
#include <Modloader/app/structs/PlayerInputRebinding_KeyBindingSettings.h>

namespace app::classes::KeybindingCommandMapAsset {
    IL2CPP_REGISTER_METHOD(
        0x00E65250,
        app::List_1_KeybindingCommandMapAsset_ExclusiveCommandList_*,
        GetExclusiveKeyLists,
        app::KeybindingCommandMapAsset* this_ptr,
        app::KeybindingCommandMapAsset_CommandBindingEnum__Enum bind
    )
    IL2CPP_REGISTER_METHOD(
        0x00E654B0,
        app::List_1_KeybindingCommandMapAsset_ExclusiveCommandList_*,
        GetExclusiveKeyExceptionLists,
        app::KeybindingCommandMapAsset* this_ptr,
        app::KeybindingCommandMapAsset_CommandBindingEnum__Enum bind
    )
    IL2CPP_REGISTER_METHOD(
        0x00E65710,
        void,
        SetCommandKey,
        app::PlayerInputRebinding_KeyBindingSettings* rebind,
        app::KeybindingCommandMapAsset_CommandBindingEnum__Enum entry_key,
        app::KeyCode__Enum__Array* entry_value
    )
    IL2CPP_REGISTER_METHOD(0x00E664D0, app::CompoundButtonInput*, GetCommandButton, app::KeybindingCommandMapAsset_CommandBindingEnum__Enum command)
    IL2CPP_REGISTER_METHOD(0x00E67870, app::IEnumerable_1_CommandBinding_*, GetAllBindingsIterator, app::KeybindingCommandMapAsset* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E67A00,
        app::List_1_CommandBinding_*,
        GetBindingsByFamily,
        app::KeybindingCommandMapAsset* this_ptr,
        app::ControlsScreen_ControlListEnum__Enum control_family
    )
    IL2CPP_REGISTER_METHOD(0x00E68EA0, void, ctor, app::KeybindingCommandMapAsset* this_ptr)
} // namespace app::classes::KeybindingCommandMapAsset

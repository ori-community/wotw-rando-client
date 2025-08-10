#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeybindingCommandMapAsset_CommandBindingEnum__Enum.h>
#include <Modloader/app/structs/List_1_KeybindingCommandMapAsset_CommandBindingEnum_.h>

namespace app::classes::System::Collections::Generic::List_1_KeybindingCommandMapAsset_CommandBindingEnum_ {
    IL2CPP_REGISTER_METHOD(
        0x02F1CC20,
        bool,
        Contains,
        app::List_1_KeybindingCommandMapAsset_CommandBindingEnum_* this_ptr,
        app::KeybindingCommandMapAsset_CommandBindingEnum__Enum item
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_KeybindingCommandMapAsset_CommandBindingEnum_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_KeybindingCommandMapAsset_CommandBindingEnum_

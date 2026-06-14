#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_AmplifyColor_VolumeEffectComponentFlags_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_AmplifyColor_VolumeEffectComponentFlags_.h>
#include <Modloader/app/structs/Predicate_1_AmplifyColor_VolumeEffectComponentFlags_.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags.h>

namespace app::classes::System::Collections::Generic::List_1_AmplifyColor_VolumeEffectComponentFlags_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_AmplifyColor_VolumeEffectComponentFlags_,
        GetEnumerator,
        app::List_1_AmplifyColor_VolumeEffectComponentFlags_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::VolumeEffectComponentFlags*,
        get_Item,
        app::List_1_AmplifyColor_VolumeEffectComponentFlags_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_AmplifyColor_VolumeEffectComponentFlags_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_AmplifyColor_VolumeEffectComponentFlags_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025F05A0,
        app::VolumeEffectComponentFlags*,
        Find,
        app::List_1_AmplifyColor_VolumeEffectComponentFlags_* this_ptr,
        app::Predicate_1_AmplifyColor_VolumeEffectComponentFlags_* match
    )
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_AmplifyColor_VolumeEffectComponentFlags_* this_ptr, app::VolumeEffectComponentFlags* item)
} // namespace app::classes::System::Collections::Generic::List_1_AmplifyColor_VolumeEffectComponentFlags_

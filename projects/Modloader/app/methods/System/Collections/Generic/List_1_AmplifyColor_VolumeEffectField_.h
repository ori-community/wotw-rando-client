#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_AmplifyColor_VolumeEffectField_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_AmplifyColor_VolumeEffectField_.h>
#include <Modloader/app/structs/Predicate_1_AmplifyColor_VolumeEffectField_.h>
#include <Modloader/app/structs/VolumeEffectField.h>

namespace app::classes::System::Collections::Generic::List_1_AmplifyColor_VolumeEffectField_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_AmplifyColor_VolumeEffectField_* this_ptr, app::VolumeEffectField* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_AmplifyColor_VolumeEffectField_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_AmplifyColor_VolumeEffectField_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1EA40, void, Insert, app::List_1_AmplifyColor_VolumeEffectField_* this_ptr, int32_t index, app::VolumeEffectField* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_AmplifyColor_VolumeEffectField_* this_ptr, app::VolumeEffectField* item)
    IL2CPP_REGISTER_METHOD(
        0x025E96A0,
        bool,
        Exists,
        app::List_1_AmplifyColor_VolumeEffectField_* this_ptr,
        app::Predicate_1_AmplifyColor_VolumeEffectField_* match
    )
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::VolumeEffectField*, get_Item, app::List_1_AmplifyColor_VolumeEffectField_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_AmplifyColor_VolumeEffectField_,
        GetEnumerator,
        app::List_1_AmplifyColor_VolumeEffectField_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_AmplifyColor_VolumeEffectField_

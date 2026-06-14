#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationParameter.h>
#include <Modloader/app/structs/AnimationParameter_Instance.h>
#include <Modloader/app/structs/Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollectio_Moo_AnimationParamete_Moo_AnimationParamete_Instanc_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_* this_ptr,
        app::AnimationParameter* key,
        app::AnimationParameter_Instance* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_* this_ptr,
        app::AnimationParameter* key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_Moon_AnimationParameter_Moon_AnimationParameter_Instance_*,
        get_Keys,
        app::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_* this_ptr,
        app::AnimationParameter* key,
        app::AnimationParameter_Instance** value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_

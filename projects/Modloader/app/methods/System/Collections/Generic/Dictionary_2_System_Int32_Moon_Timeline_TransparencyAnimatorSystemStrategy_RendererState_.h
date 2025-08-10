#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_.h>
#include <Modloader/app/structs/TransparencyAnimatorSystemStrategy_RendererState.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* this_ptr,
        int32_t key,
        app::TransparencyAnimatorSystemStrategy_RendererState** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* this_ptr,
        int32_t key,
        app::TransparencyAnimatorSystemStrategy_RendererState* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2A0,
        int32_t,
        get_Count,
        app::Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA360,
        bool,
        Remove,
        app::Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(
        0x02259DF0,
        void,
        ctor,
        app::Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_* this_ptr,
        int32_t capacity
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_TransparencyAnimatorSystemStrategy_RendererState_

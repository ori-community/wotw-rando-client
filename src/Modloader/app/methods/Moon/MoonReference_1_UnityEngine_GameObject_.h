#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_UnityEngine_GameObject_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::GameObject*, Resolve, app::MoonReference_1_UnityEngine_GameObject_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(
        0x027214E0,
        bool,
        TryResolve,
        app::MoonReference_1_UnityEngine_GameObject_* this_ptr,
        app::GameObject** value,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(
        0x02720EB0,
        app::GameObject*,
        SafeResolve,
        app::MoonReference_1_UnityEngine_GameObject_* this_ptr,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, app::MoonReference_1_UnityEngine_GameObject_* this_ptr, app::GameObject* reference)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, app::MoonReference_1_UnityEngine_GameObject_* this_ptr, app::GameObject* new_value)
    IL2CPP_REGISTER_METHOD(0x027208E0, bool, get_IsStaticValue, app::MoonReference_1_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02721A70,
        void,
        SetValueInResolver,
        app::MoonReference_1_UnityEngine_GameObject_* this_ptr,
        app::GameObject* new_value,
        app::IMoonResolverContext* context
    )
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_GameObject_

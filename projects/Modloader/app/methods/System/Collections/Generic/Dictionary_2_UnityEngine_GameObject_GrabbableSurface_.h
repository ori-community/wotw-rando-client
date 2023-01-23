#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_GrabbableSurface_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_GrabbableSurface_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * this_ptr, app::GameObject* key, app::GrabbableSurface** value))
    IL2CPP_REGISTER_METHODINFO(0x0478E5A8, Dictionary_2_UnityEngine_GameObject_GrabbableSurface__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * this_ptr, app::GameObject* key, app::GrabbableSurface* value))
    IL2CPP_REGISTER_METHODINFO(0x0471FE88, Dictionary_2_UnityEngine_GameObject_GrabbableSurface__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_GrabbableSurface_, GetEnumerator, (app::Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F438, Dictionary_2_UnityEngine_GameObject_GrabbableSurface__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * this_ptr, app::GameObject* key))
    IL2CPP_REGISTER_METHODINFO(0x0475B9D0, Dictionary_2_UnityEngine_GameObject_GrabbableSurface__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771890, Dictionary_2_UnityEngine_GameObject_GrabbableSurface___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_GrabbableSurface_

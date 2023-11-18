#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_SphereCollider_.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_SphereCollider_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::SphereCollider*, SafeResolve, (app::MoonReference_1_UnityEngine_SphereCollider_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_UnityEngine_SphereCollider_ * this_ptr, app::SphereCollider** value, app::IMoonResolverContext* context))
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_SphereCollider_

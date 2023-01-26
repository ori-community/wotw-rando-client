#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_Transform_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::Transform*, Resolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::Transform*, SafeResolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::Transform* reference))
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::Transform** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr))
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_Transform_

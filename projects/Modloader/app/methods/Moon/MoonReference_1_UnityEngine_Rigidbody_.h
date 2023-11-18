#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Rigidbody_.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_Rigidbody_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::Rigidbody*, SafeResolve, (app::MoonReference_1_UnityEngine_Rigidbody_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_UnityEngine_Rigidbody_ * this_ptr, app::Rigidbody** value, app::IMoonResolverContext* context))
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_Rigidbody_

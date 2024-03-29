#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachedInvokableCall_1_System_Single_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::UnityEngine::Events::CachedInvokableCall_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02AC50A0, void, ctor, (app::CachedInvokableCall_1_System_Single_ * this_ptr, app::Object_1* target, app::MethodInfo_1* the_function, float argument))
    IL2CPP_REGISTER_METHOD(0x02AC50F0, void, Invoke_1, (app::CachedInvokableCall_1_System_Single_ * this_ptr, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x02AC50F0, void, Invoke_2, (app::CachedInvokableCall_1_System_Single_ * this_ptr, float arg0))
} // namespace app::classes::UnityEngine::Events::CachedInvokableCall_1_System_Single_

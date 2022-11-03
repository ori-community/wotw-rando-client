#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::SetupCoroutine {
    IL2CPP_REGISTER_METHOD(0x0297D080, void, InvokeMoveNext, (app::IEnumerator * enumerator, void* return_value_address))
    IL2CPP_REGISTER_METHODINFO(0x047139B8, SetupCoroutine_InvokeMoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0297D160, app::Object*, InvokeMember, (app::Object * behaviour, app::String* name, app::Object* variable))
} // namespace app::classes::UnityEngine::SetupCoroutine

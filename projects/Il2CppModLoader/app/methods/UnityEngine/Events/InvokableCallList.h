#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::InvokableCallList {
    IL2CPP_REGISTER_METHOD(0x0242EF00, void, ctor, (app::InvokableCallList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242F1F0, void, AddPersistentInvokableCall, (app::InvokableCallList * this_ptr, app::BaseInvokableCall * call))
    IL2CPP_REGISTER_METHOD(0x0242F2A0, void, AddListener, (app::InvokableCallList * this_ptr, app::BaseInvokableCall * call))
    IL2CPP_REGISTER_METHOD(0x0242F350, void, RemoveListener, (app::InvokableCallList * this_ptr, app::Object * target_obj, app::MethodInfo_1 * method_1))
    IL2CPP_REGISTER_METHOD(0x0242F6D0, void, ClearPersistent, (app::InvokableCallList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242F780, app::List_1_UnityEngine_Events_BaseInvokableCall_ *, PrepareInvoke, (app::InvokableCallList * this_ptr))
}

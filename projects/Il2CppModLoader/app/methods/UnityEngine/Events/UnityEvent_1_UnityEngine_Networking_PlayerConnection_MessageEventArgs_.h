#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Events::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ {
    IL2CPP_REGISTER_METHOD(0x02AC8AE0, void, AddListener, (app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * this_ptr, app::UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * call))
    IL2CPP_REGISTER_METHODINFO(0x0473F1E8, UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs__AddListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC9710, void, Invoke, (app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * this_ptr, app::MessageEventArgs * arg0))
    IL2CPP_REGISTER_METHODINFO(0x04772ED8, UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC8B20, void, RemoveListener, (app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * this_ptr, app::UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * call))
    IL2CPP_REGISTER_METHODINFO(0x0472BCC0, UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs__RemoveListener__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, (app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793B20, UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC95D0, app::MethodInfo_1 *, FindMethod_Impl, (app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * this_ptr, app::String * name, app::Object * target_obj))
    IL2CPP_REGISTER_METHOD(0x02AC8CD0, app::BaseInvokableCall *, GetDelegate, (app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ * this_ptr, app::Object * target, app::MethodInfo_1 * the_function))
}

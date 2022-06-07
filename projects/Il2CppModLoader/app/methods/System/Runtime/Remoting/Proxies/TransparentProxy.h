#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Proxies::TransparentProxy {
    IL2CPP_REGISTER_METHOD(0x023200F0, app::RuntimeType *, GetProxyType, (app::TransparentProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02320200, bool, get_IsContextBoundObject, (app::TransparentProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Context *, get_TargetContext, (app::TransparentProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02320320, bool, InCurrentContext, (app::TransparentProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023204A0, app::Object *, LoadRemoteFieldNew, (app::TransparentProxy * this_ptr, void * class_ptr, void * field_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C860, TransparentProxy_LoadRemoteFieldNew__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02320900, void, StoreRemoteField, (app::TransparentProxy * this_ptr, void * class_ptr, void * field_ptr, app::Object * arg))
    IL2CPP_REGISTER_METHODINFO(0x04746198, TransparentProxy_StoreRemoteField__MethodInfo)
}

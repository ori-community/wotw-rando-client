#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Proxies::RealProxy {
    IL2CPP_REGISTER_METHOD(0x0231D520, void, ctor_1, (app::RealProxy * this_ptr, app::Type * class_to_proxy))
    IL2CPP_REGISTER_METHOD(0x0231D5C0, void, ctor_2, (app::RealProxy * this_ptr, app::Type * class_to_proxy, app::ClientIdentity * identity))
    IL2CPP_REGISTER_METHOD(0x0231D670, void, ctor_3, (app::RealProxy * this_ptr, app::Type * class_to_proxy, void * stub, app::Object * stub_data))
    IL2CPP_REGISTER_METHODINFO(0x04746700, RealProxy__ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0231D7A0, app::Type *, InternalGetProxyType, (app::Object * transparent_proxy))
    IL2CPP_REGISTER_METHOD(0x0231D7B0, app::Type *, GetProxiedType, (app::RealProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0231D890, void, GetObjectData, (app::RealProxy * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Identity *, get_ObjectIdentity, (app::RealProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ObjectIdentity, (app::RealProxy * this_ptr, app::Identity * value))
    IL2CPP_REGISTER_METHOD(0x0231D960, app::Object *, PrivateInvoke, (app::RealProxy * rp, app::IMessage * msg, app::Exception * * exc, app::Object__Array * * out_args))
    IL2CPP_REGISTER_METHODINFO(0x047450E0, RealProxy_PrivateInvoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0231E3C0, app::Object *, InternalGetTransparentProxy, (app::RealProxy * this_ptr, app::String * class_name))
    IL2CPP_REGISTER_METHOD(0x0231E3D0, app::Object *, GetTransparentProxy, (app::RealProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, AttachServer, (app::RealProxy * this_ptr, app::MarshalByRefObject * s))
    IL2CPP_REGISTER_METHOD(0x002FB980, void, SetTargetDomain, (app::RealProxy * this_ptr, int32_t domain_id))
    IL2CPP_REGISTER_METHOD(0x0231E550, app::Object *, GetAppDomainTarget, (app::RealProxy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047086F8, RealProxy_GetAppDomainTarget__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0231E6A0, app::Object__Array *, ProcessResponse, (app::IMethodReturnMessage * mrm, app::MonoMethodMessage * call))
    IL2CPP_REGISTER_METHODINFO(0x0475DB20, RealProxy_ProcessResponse__MethodInfo)
}

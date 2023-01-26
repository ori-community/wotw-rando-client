#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemotingProxy.h>
#include <Modloader/app/structs/ClientIdentity.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMethodMessage.h>
#include <Modloader/app/structs/Identity.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Remoting::Proxies::RemotingProxy {
    IL2CPP_REGISTER_METHOD(0x0231ECB0, void, ctor_1, (app::RemotingProxy * this_ptr, app::Type* type, app::ClientIdentity* identity))
    IL2CPP_REGISTER_METHOD(0x0231EDA0, void, ctor_2, (app::RemotingProxy * this_ptr, app::Type* type, app::String* activation_url, app::Object__Array* activation_attributes))
    IL2CPP_REGISTER_METHOD(0x0231EE70, app::IMessage*, Invoke, (app::RemotingProxy * this_ptr, app::IMessage* request))
    IL2CPP_REGISTER_METHOD(0x0231F430, void, AttachIdentity, (app::RemotingProxy * this_ptr, app::Identity* identity))
    IL2CPP_REGISTER_METHOD(0x0231F830, app::IMessage*, ActivateRemoteObject, (app::RemotingProxy * this_ptr, app::IMethodMessage* request))
    IL2CPP_REGISTER_METHOD(0x0231FB20, app::String*, get_TypeName, (app::RemotingProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0231FC90, bool, CanCastTo, (app::RemotingProxy * this_ptr, app::Type* from_type, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x0231FEA0, void, Finalize, (app::RemotingProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0231FFE0, void, cctor, ())
} // namespace app::classes::System::Runtime::Remoting::Proxies::RemotingProxy

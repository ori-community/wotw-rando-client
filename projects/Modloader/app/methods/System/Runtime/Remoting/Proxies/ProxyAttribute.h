#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MarshalByRefObject.h>
#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/IConstructionCallMessage.h>
#include <Modloader/app/structs/ObjRef.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ProxyAttribute.h>
#include <Modloader/app/structs/RealProxy.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Remoting::Proxies::ProxyAttribute {
    IL2CPP_REGISTER_METHOD(0x0231D270, app::MarshalByRefObject*, CreateInstance, (app::ProxyAttribute * this_ptr, app::Type* server_type))
    IL2CPP_REGISTER_METHOD(0x0231D470, app::RealProxy*, CreateProxy, (app::ProxyAttribute * this_ptr, app::ObjRef* obj_ref, app::Type* server_type, app::Object* server_object, app::Context* server_context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetPropertiesForNewContext, (app::ProxyAttribute * this_ptr, app::IConstructionCallMessage* msg))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsContextOK, (app::ProxyAttribute * this_ptr, app::Context* ctx, app::IConstructionCallMessage* msg))
} // namespace app::classes::System::Runtime::Remoting::Proxies::ProxyAttribute

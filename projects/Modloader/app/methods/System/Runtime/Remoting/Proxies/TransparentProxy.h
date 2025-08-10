#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Context.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/TransparentProxy.h>

namespace app::classes::System::Runtime::Remoting::Proxies::TransparentProxy {
    IL2CPP_REGISTER_METHOD(0x023200F0, app::RuntimeType*, GetProxyType, app::TransparentProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02320200, bool, get_IsContextBoundObject, app::TransparentProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004173F0, app::Context*, get_TargetContext, app::TransparentProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02320320, bool, InCurrentContext, app::TransparentProxy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023204A0, app::Object*, LoadRemoteFieldNew, app::TransparentProxy* this_ptr, void* class_ptr, void* field_ptr)
    IL2CPP_REGISTER_METHOD(0x02320900, void, StoreRemoteField, app::TransparentProxy* this_ptr, void* class_ptr, void* field_ptr, app::Object* arg)
} // namespace app::classes::System::Runtime::Remoting::Proxies::TransparentProxy

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::LogicalCallContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::LogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02310D00, void, ctor_2, (app::LogicalCallContext * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02310FA0, void, GetObjectData, (app::LogicalCallContext * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04786A98, LogicalCallContext_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02311330, app::Object*, Clone, (app::LogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02311C10, void, Merge, (app::LogicalCallContext * this_ptr, app::LogicalCallContext* lc))
    IL2CPP_REGISTER_METHOD(0x02311F00, bool, get_HasInfo, (app::LogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023107C0, bool, get_HasUserData, (app::LogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02311F60, app::Hashtable*, get_Datastore, (app::LogicalCallContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023120D0, void, cctor, ())
} // namespace app::classes::System::Runtime::Remoting::Messaging::LogicalCallContext

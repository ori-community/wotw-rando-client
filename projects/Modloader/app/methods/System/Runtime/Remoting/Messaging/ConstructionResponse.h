#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::Messaging::ConstructionResponse {
    IL2CPP_REGISTER_METHOD(0x023100E0, void, ctor_1, (app::ConstructionResponse * this_ptr, app::Object* result_object, app::LogicalCallContext* call_ctx, app::IMethodCallMessage* msg))
    IL2CPP_REGISTER_METHOD(0x02310110, void, ctor_2, (app::ConstructionResponse * this_ptr, app::Exception* e, app::IMethodCallMessage* msg))
    IL2CPP_REGISTER_METHOD(0x02310120, void, ctor_3, (app::ConstructionResponse * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x023101C0, app::IDictionary*, get_Properties, (app::ConstructionResponse * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::Messaging::ConstructionResponse

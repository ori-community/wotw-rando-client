#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::DelegateSerializationHolder {
    IL2CPP_REGISTER_METHOD(0x017401E0, void, ctor, (app::DelegateSerializationHolder * this_ptr, app::SerializationInfo* info, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x01740470, void, GetDelegateData, (app::Delegate * instance, app::SerializationInfo* info, app::StreamingContext ctx))
    IL2CPP_REGISTER_METHOD(0x017407B0, void, GetObjectData, (app::DelegateSerializationHolder * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0474F5F8, DelegateSerializationHolder_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, GetRealObject, (app::DelegateSerializationHolder * this_ptr, app::StreamingContext context))
} // namespace app::classes::System::DelegateSerializationHolder

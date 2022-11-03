#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Array_InternalEnumerator_1_MessageDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_MessageDescriptor___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_MessageDescriptor___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_MessageDescriptor___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00163520, app::MessageDescriptor, get_Current, (app::Array_InternalEnumerator_1_MessageDescriptor___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711A08, Array_InternalEnumerator_1_MessageDescriptor__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_MessageDescriptor___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00163550, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_MessageDescriptor___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_MessageDescriptor_

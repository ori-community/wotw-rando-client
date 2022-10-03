#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::Win32Exception {
    IL2CPP_REGISTER_METHOD(0x0295EA40, void, ctor_1, (app::Win32Exception * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0295EB20, void, ctor_2, (app::Win32Exception * this_ptr, int32_t error))
    IL2CPP_REGISTER_METHOD(0x0295EBE0, void, ctor_3, (app::Win32Exception * this_ptr, int32_t error, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0295EC20, void, ctor_4, (app::Win32Exception * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0295ED20, void, ctor_5, (app::Win32Exception * this_ptr, app::String* message, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x0295EE30, void, ctor_6, (app::Win32Exception * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_NativeErrorCode, (app::Win32Exception * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0295EF00, void, GetObjectData, (app::Win32Exception * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04725A18, Win32Exception_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0295F000, app::String*, GetErrorMessage, (int32_t error))
    IL2CPP_REGISTER_METHOD(0x0295F1E0, void, InitializeErrorMessages, ())
    IL2CPP_REGISTER_METHOD(0x02960E20, void, cctor, ())
} // namespace app::classes::System::ComponentModel::Win32Exception

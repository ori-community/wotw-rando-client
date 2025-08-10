#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#include <Modloader/app/structs/Exception_ExceptionMessageKind__Enum.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Exception {
    IL2CPP_REGISTER_METHOD(0x01A1AFC0, void, Init, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1B110, void, ctor_1, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1B120, void, ctor_2, app::Exception* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A1B150, void, ctor_3, app::Exception* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01A1B190, void, ctor_4, app::Exception* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01A1B4C0, app::String*, get_Message, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1B600, app::IDictionary*, get_Data, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsImmutableAgileException, app::Exception* e)
    IL2CPP_REGISTER_METHOD(0x01A1B770, app::String*, GetClassName, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Exception*, get_InnerException, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1B7C0, app::String*, get_StackTrace, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1B800, app::String*, GetStackTrace, app::Exception* this_ptr, bool need_file_info)
    IL2CPP_REGISTER_METHOD(0x002FD760, void, SetErrorCode, app::Exception* this_ptr, int32_t hr)
    IL2CPP_REGISTER_METHOD(0x01A1B850, app::String*, get_Source, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1BAA0, app::String*, ToString_1, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1BAB0, app::String*, ToString_2, app::Exception* this_ptr, bool need_file_line_info, bool need_message)
    IL2CPP_REGISTER_METHOD(0x01A1BED0, void, GetObjectData, app::Exception* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x01A1C2A0, void, OnDeserialized, app::Exception* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x00502220, app::String*, StripFileInfo, app::Exception* this_ptr, app::String* stack_trace, bool is_remote_stack_trace)
    IL2CPP_REGISTER_METHOD(0x01A1C410, void, RestoreExceptionDispatchInfo, app::Exception* this_ptr, app::ExceptionDispatchInfo* exception_dispatch_info)
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_HResult, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_HResult, app::Exception* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01A1C4F0, app::Type*, GetType, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1C500, app::String*, GetMessageFromNativeResources, app::Exception_ExceptionMessageKind__Enum kind)
    IL2CPP_REGISTER_METHOD(0x01A1C590, app::Exception*, FixRemotingException, app::Exception* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1C6D0, void, cctor, )
} // namespace app::classes::System::Exception

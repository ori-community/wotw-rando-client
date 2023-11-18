#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateException.h>
#include <Modloader/app/structs/Exception__Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Exception_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>
#include <Modloader/app/structs/IList_1_System_Exception_.h>
#include <Modloader/app/structs/IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Exception_.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::AggregateException {
    IL2CPP_REGISTER_METHOD(0x0228B2B0, void, ctor_1, (app::AggregateException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228B460, void, ctor_2, (app::AggregateException * this_ptr, app::IEnumerable_1_System_Exception_* inner_exceptions))
    IL2CPP_REGISTER_METHOD(0x0228B500, void, ctor_3, (app::AggregateException * this_ptr, app::Exception__Array* inner_exceptions))
    IL2CPP_REGISTER_METHOD(0x0228B5A0, void, ctor_4, (app::AggregateException * this_ptr, app::String* message, app::IEnumerable_1_System_Exception_* inner_exceptions))
    IL2CPP_REGISTER_METHOD(0x0228B740, void, ctor_5, (app::AggregateException * this_ptr, app::String* message, app::Exception__Array* inner_exceptions))
    IL2CPP_REGISTER_METHOD(0x0228B750, void, ctor_6, (app::AggregateException * this_ptr, app::String* message, app::IList_1_System_Exception_* inner_exceptions))
    IL2CPP_REGISTER_METHOD(0x0228BA60, void, ctor_7, (app::AggregateException * this_ptr, app::IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* inner_exception_infos))
    IL2CPP_REGISTER_METHOD(0x0228BB00, void, ctor_8, (app::AggregateException * this_ptr, app::String* message, app::IEnumerable_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* inner_exception_infos))
    IL2CPP_REGISTER_METHOD(0x0228BCA0, void, ctor_9, (app::AggregateException * this_ptr, app::String* message, app::IList_1_System_Runtime_ExceptionServices_ExceptionDispatchInfo_* inner_exception_infos))
    IL2CPP_REGISTER_METHOD(0x0228BFC0, void, ctor_10, (app::AggregateException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0228C230, void, GetObjectData, (app::AggregateException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::ReadOnlyCollection_1_System_Exception_*, get_InnerExceptions, (app::AggregateException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228C440, app::AggregateException*, Flatten, (app::AggregateException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228C860, app::String*, ToString, (app::AggregateException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0228CB70, int32_t, get_InnerExceptionCount, (app::AggregateException * this_ptr))
} // namespace app::classes::System::AggregateException

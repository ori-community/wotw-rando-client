#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseLoggingObject.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ThreadKinds__Enum.h>

namespace app::classes::System::Net::GlobalLog {
    IL2CPP_REGISTER_METHOD(0x01D383E0, app::BaseLoggingObject*, LoggingInitialize, )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ThreadKinds__Enum, get_CurrentThreadKind, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetThreadSource, app::ThreadKinds__Enum source)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ThreadContract_1, app::ThreadKinds__Enum kind, app::String* error_msg)
    IL2CPP_REGISTER_METHOD(0x01D38520, void, ThreadContract_2, app::ThreadKinds__Enum kind, app::ThreadKinds__Enum allowed_sources, app::String* error_msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddToArray, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Ignore, app::Object* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Print, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintHex, app::String* msg, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter_1, app::String* func)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter_2, app::String* func, app::String* parms)
    IL2CPP_REGISTER_METHOD(0x01D38600, void, Assert_1, bool condition, app::String* message_format, app::Object__Array* data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Assert_2, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01D386F0, void, Assert_3, app::String* message, app::String* detail_message)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LeaveException, app::String* func, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave_1, app::String* func)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave_2, app::String* func, app::String* result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave_3, app::String* func, int32_t returnval)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Leave_4, app::String* func, bool returnval)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArray, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_1, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_2, app::Byte__Array* buffer, int32_t length)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_3, app::Byte__Array* buffer, int32_t offset, int32_t length)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_4, void* buffer, int32_t offset, int32_t length)
    IL2CPP_REGISTER_METHOD(0x01D38840, void, cctor, )
} // namespace app::classes::System::Net::GlobalLog

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseLoggingObject.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::BaseLoggingObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BaseLoggingObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterFunc, (app::BaseLoggingObject * this_ptr, app::String* funcname))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LeaveFunc, (app::BaseLoggingObject * this_ptr, app::String* funcname))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArrayToConsole, (app::BaseLoggingObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintLine, (app::BaseLoggingObject * this_ptr, app::String* msg))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArray, (app::BaseLoggingObject * this_ptr, bool should_close))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DumpArrayToFile, (app::BaseLoggingObject * this_ptr, bool should_close))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush_1, (app::BaseLoggingObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush_2, (app::BaseLoggingObject * this_ptr, bool close))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LoggingMonitorTick, (app::BaseLoggingObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_1, (app::BaseLoggingObject * this_ptr, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_2, (app::BaseLoggingObject * this_ptr, app::Byte__Array* buffer, int32_t length))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_3, (app::BaseLoggingObject * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t length))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_4, (app::BaseLoggingObject * this_ptr, void* p_buffer, int32_t offset, int32_t length))
} // namespace app::classes::System::Net::BaseLoggingObject

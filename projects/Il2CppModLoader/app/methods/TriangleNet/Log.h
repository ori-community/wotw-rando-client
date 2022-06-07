#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Log {
    IL2CPP_REGISTER_METHOD(0x026294B0, bool, get_Verbose, ())
    IL2CPP_REGISTER_METHOD(0x02629550, void, set_Verbose, (bool value))
    IL2CPP_REGISTER_METHOD(0x02629600, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02629870, void, ctor, (app::Log * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026299C0, app::ILog_1_LogItem_ *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02629A60, void, Add, (app::Log * this_ptr, app::LogItem * item))
    IL2CPP_REGISTER_METHOD(0x02629B00, void, Clear, (app::Log * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02629BB0, void, Info, (app::Log * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x02629D90, void, Warning, (app::Log * this_ptr, app::String * message, app::String * location))
    IL2CPP_REGISTER_METHOD(0x02629F20, void, Error, (app::Log * this_ptr, app::String * message, app::String * location))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IList_1_TriangleNet_Logging_LogItem_ *, get_Data, (app::Log * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::LogLevel__Enum, get_Level, (app::Log * this_ptr))
}

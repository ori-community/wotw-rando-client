#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceSource.h>

namespace app::classes::System::Net::Logging {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::TraceSource*, get_Web, )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::TraceSource*, get_HttpListener, )
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::TraceSource*, get_Sockets, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter_1, app::TraceSource* trace_source, app::Object* obj, app::String* method_1, app::Object* param_object)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter_2, app::TraceSource* trace_source, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Enter_3, app::TraceSource* trace_source, app::String* msg, app::String* parameters)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Exception, app::TraceSource* trace_source, app::Object* obj, app::String* method_1, app::Exception* e)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit_1, app::TraceSource* trace_source, app::Object* obj, app::String* method_1, app::Object* ret_object)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit_2, app::TraceSource* trace_source, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit_3, app::TraceSource* trace_source, app::String* msg, app::String* parameters)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintInfo_1, app::TraceSource* trace_source, app::Object* obj, app::String* method_1, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintInfo_2, app::TraceSource* trace_source, app::Object* obj, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintInfo_3, app::TraceSource* trace_source, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintWarning_1, app::TraceSource* trace_source, app::Object* obj, app::String* method_1, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintWarning_2, app::TraceSource* trace_source, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrintError, app::TraceSource* trace_source, app::String* msg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::System::Net::Logging

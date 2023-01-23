#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/FormattableString.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/NetEventSource.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Net::NetEventSource {
    IL2CPP_REGISTER_METHOD(0x01E71D10, void, Enter_1, (app::Object * this_or_context_object, app::FormattableString* formattable_string, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E71E70, void, Enter_2, (app::Object * this_or_context_object, app::Object* arg0, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72000, void, Enter_3, (app::Object * this_or_context_object, app::Object* arg0, app::Object* arg1, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E721A0, void, Enter_4, (app::Object * this_or_context_object, app::Object* arg0, app::Object* arg1, app::Object* arg2, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72350, void, Enter_5, (app::NetEventSource * this_ptr, app::String* this_or_context_object, app::String* member_name, app::String* parameters))
    IL2CPP_REGISTER_METHOD(0x01E72430, void, Exit_1, (app::Object * this_or_context_object, app::FormattableString* formattable_string, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72590, void, Exit_2, (app::Object * this_or_context_object, app::Object* arg0, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E726E0, void, Exit_3, (app::Object * this_or_context_object, app::Object* arg0, app::Object* arg1, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72880, void, Exit_4, (app::NetEventSource * this_ptr, app::String* this_or_context_object, app::String* member_name, app::String* result))
    IL2CPP_REGISTER_METHOD(0x01E72960, void, Info_1, (app::Object * this_or_context_object, app::FormattableString* formattable_string, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72AC0, void, Info_2, (app::Object * this_or_context_object, app::Object* message, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72C10, void, Info_3, (app::NetEventSource * this_ptr, app::String* this_or_context_object, app::String* member_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E72CF0, void, Error_1, (app::Object * this_or_context_object, app::FormattableString* formattable_string, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72E20, void, Error_2, (app::Object * this_or_context_object, app::Object* message, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E72F70, void, ErrorMessage, (app::NetEventSource * this_ptr, app::String* this_or_context_object, app::String* member_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E73050, void, Fail_1, (app::Object * this_or_context_object, app::FormattableString* formattable_string, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E73180, void, Fail_2, (app::Object * this_or_context_object, app::Object* message, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E732D0, void, CriticalFailure, (app::NetEventSource * this_ptr, app::String* this_or_context_object, app::String* member_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01E733B0, void, DumpBuffer_1, (app::Object * this_or_context_object, app::Byte__Array* buffer, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E73490, void, DumpBuffer_2, (app::Object * this_or_context_object, app::Byte__Array* buffer, int32_t offset, int32_t count, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E73940, void, DumpBuffer_3, (app::Object * this_or_context_object, void* buffer_ptr, int32_t count, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E73B80, void, DumpBuffer_4, (app::NetEventSource * this_ptr, app::String* this_or_context_object, app::String* member_name, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x01E73C60, void, Associate_1, (app::Object * first, app::Object* second, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E73DB0, void, Associate_2, (app::Object * this_or_context_object, app::Object* first, app::Object* second, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x01E73F00, void, Associate_3, (app::NetEventSource * this_ptr, app::String* this_or_context_object, app::String* member_name, app::String* first, app::String* second))
    IL2CPP_REGISTER_METHOD(0x01E73FE0, void, DebugValidateArg_1, (app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugValidateArg_2, (app::FormattableString * arg))
    IL2CPP_REGISTER_METHOD(0x01E74070, bool, get_IsEnabled, ())
    IL2CPP_REGISTER_METHOD(0x01E74120, app::String*, IdOf, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01E74250, int32_t, GetHashCode, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01E74270, app::Object*, Format_1, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01E745F0, app::String*, Format_2, (app::FormattableString * s))
    IL2CPP_REGISTER_METHOD(0x01E749E0, void, WriteEvent_1, (app::NetEventSource * this_ptr, int32_t event_id, app::String* arg1, app::String* arg2, app::String* arg3, app::String* arg4))
    IL2CPP_REGISTER_METHODINFO(0x0476E760, NetEventSource_WriteEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E74BA0, void, WriteEvent_2, (app::NetEventSource * this_ptr, int32_t event_id, app::String* arg1, app::String* arg2, app::Byte__Array* arg3))
    IL2CPP_REGISTER_METHODINFO(0x04727F08, NetEventSource_WriteEvent_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E74DE0, void, WriteEvent_3, (app::NetEventSource * this_ptr, int32_t event_id, app::String* arg1, int32_t arg2, int32_t arg3, int32_t arg4))
    IL2CPP_REGISTER_METHODINFO(0x047078A8, NetEventSource_WriteEvent_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E74F20, void, WriteEvent_4, (app::NetEventSource * this_ptr, int32_t event_id, app::String* arg1, int32_t arg2, app::String* arg3))
    IL2CPP_REGISTER_METHODINFO(0x04771138, NetEventSource_WriteEvent_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E75070, void, WriteEvent_5, (app::NetEventSource * this_ptr, int32_t event_id, app::String* arg1, app::String* arg2, int32_t arg3))
    IL2CPP_REGISTER_METHODINFO(0x0474F4F8, NetEventSource_WriteEvent_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E751D0, void, WriteEvent_6, (app::NetEventSource * this_ptr, int32_t event_id, app::String* arg1, app::String* arg2, app::String* arg3, int32_t arg4))
    IL2CPP_REGISTER_METHODINFO(0x047408A8, NetEventSource_WriteEvent_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E75370, void, ctor, (app::NetEventSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E75410, void, cctor, ())
} // namespace app::classes::System::Net::NetEventSource

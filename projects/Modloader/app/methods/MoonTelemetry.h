#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IRequest.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/MoonTelemetry.h>
#include <Modloader/app/structs/MoonTelemetryEvent.h>
#include <Modloader/app/structs/MoonTelemetry_State__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::MoonTelemetry {
    IL2CPP_REGISTER_METHOD(0x02E9B450, app::String*, CleanName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02E9B520, app::MoonTelemetry_State__Enum, get_CurrentState, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonTelemetry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A93850, void, Finalize, app::MoonTelemetry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ChangeState, app::MoonTelemetry_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TryChangeState, app::MoonTelemetry_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartThread, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StopThread, )
    IL2CPP_REGISTER_METHOD(0x02E9B5C0, bool, get_AllowTelemetry, )
    IL2CPP_REGISTER_METHOD(0x02E9B660, void, set_AllowTelemetry, bool value)
    IL2CPP_REGISTER_METHOD(0x02E9B710, void, Send, app::MoonTelemetryEvent* moon_telemetry_event)
    IL2CPP_REGISTER_METHOD(
        0x02E9B900,
        void,
        Post,
        int32_t type_i_d,
        app::String* eventname,
        int32_t sequence_i_d,
        app::DateTime timestamp_u_t_c,
        app::Object* payload
    )
    IL2CPP_REGISTER_METHOD(0x02E9BBE0, void, MoonTelemetryMain, )
    IL2CPP_REGISTER_METHOD(0x02E9D630, void, Sleep, )
    IL2CPP_REGISTER_METHOD(0x02E9D640, void, SetupTimeout, app::TimeSpan delay)
    IL2CPP_REGISTER_METHOD(0x02E9D740, void, add_OnStartThread, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x02E9D880, void, remove_OnStartThread, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x02E9D9C0, void, add_OnStopThread, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x02E9DB00, void, remove_OnStopThread, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x02E9DC40, void, OnApplicationQuit, )
    IL2CPP_REGISTER_METHOD(0x02E9DCD0, void, OnDomainUnload, app::Object* obj, app::EventArgs* args)
    IL2CPP_REGISTER_METHOD(0x02E9DD60, void, PlaymodeUpdateSafe, )
    IL2CPP_REGISTER_METHOD(0x02E9DE00, void, PlaymodeUpdate, )
    IL2CPP_REGISTER_METHOD(0x02E9E060, void, ShowResponseErrorLog, int32_t status_code, int32_t try_count, app::Exception* error, app::IRequest* request)
    IL2CPP_REGISTER_METHOD(0x02E9E440, int32_t, get_TotalSends, )
    IL2CPP_REGISTER_METHOD(0x02E9E4E0, int32_t, get_PendingEventsMaxCount, )
    IL2CPP_REGISTER_METHOD(0x02E9E580, int32_t, get_PostDataQueueMaxCount, )
    IL2CPP_REGISTER_METHOD(0x02E9E620, app::List_1_System_String_*, GetAndClearExceptions, )
    IL2CPP_REGISTER_METHOD(0x02E9E700, app::Dictionary_2_System_Int32_System_Int32_*, get_ResponseCodesCount, )
    IL2CPP_REGISTER_METHOD(0x02E9E7A0, void, cctor, )
} // namespace app::classes::MoonTelemetry

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ServiceNameCollection.h>
#include <Modloader/app/structs/ServiceNameStore.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::Net::ServiceNameStore {
    IL2CPP_REGISTER_METHOD(0x01BD3990, app::ServiceNameCollection*, get_ServiceNames, (app::ServiceNameStore * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD3AF0, void, ctor, (app::ServiceNameStore * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD3C40, bool, AddSingleServiceName, (app::ServiceNameStore * this_ptr, app::String* spn))
    IL2CPP_REGISTER_METHOD(0x01BD3D20, bool, Add, (app::ServiceNameStore * this_ptr, app::String* uri_prefix))
    IL2CPP_REGISTER_METHOD(0x01BD3F20, bool, Remove, (app::ServiceNameStore * this_ptr, app::String* uri_prefix))
    IL2CPP_REGISTER_METHOD(0x01BD40A0, bool, Contains, (app::ServiceNameStore * this_ptr, app::String* new_service_name))
    IL2CPP_REGISTER_METHOD(0x01BD40C0, void, Clear, (app::ServiceNameStore * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BD4170, app::String*, ExtractHostname, (app::ServiceNameStore * this_ptr, app::String* uri_prefix, bool allow_invalid_uri_strings))
    IL2CPP_REGISTER_METHOD(0x01BD43F0, app::String*, BuildSimpleServiceName, (app::ServiceNameStore * this_ptr, app::String* uri_prefix))
    IL2CPP_REGISTER_METHOD(0x01BD44B0, app::String__Array*, BuildServiceNames, (app::ServiceNameStore * this_ptr, app::String* uri_prefix))
} // namespace app::classes::System::Net::ServiceNameStore

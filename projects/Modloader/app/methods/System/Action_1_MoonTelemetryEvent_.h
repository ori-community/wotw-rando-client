#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_MoonTelemetryEvent_.h>
#include <Modloader/app/structs/MoonTelemetryEvent.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_MoonTelemetryEvent_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_MoonTelemetryEvent_ * this_ptr, app::MoonTelemetryEvent* obj))
    IL2CPP_REGISTER_METHODINFO(0x0471D608, Action_1_MoonTelemetryEvent__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_MoonTelemetryEvent_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0473F6B0, Action_1_MoonTelemetryEvent___ctor__MethodInfo)
} // namespace app::classes::System::Action_1_MoonTelemetryEvent_

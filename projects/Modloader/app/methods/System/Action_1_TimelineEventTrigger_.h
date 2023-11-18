#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_TimelineEventTrigger_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>

namespace app::classes::System::Action_1_TimelineEventTrigger_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_TimelineEventTrigger_ * this_ptr, app::TimelineEventTrigger* obj))
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_TimelineEventTrigger_ * this_ptr, app::Object* object, void* method_1))
} // namespace app::classes::System::Action_1_TimelineEventTrigger_

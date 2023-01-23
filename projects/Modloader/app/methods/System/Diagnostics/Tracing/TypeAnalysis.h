#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TypeAnalysis.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/EventDataAttribute.h>
#include <Modloader/app/structs/List_1_System_Type_.h>

namespace app::classes::System::Diagnostics::Tracing::TypeAnalysis {
    IL2CPP_REGISTER_METHOD(0x01A0DDC0, void, ctor, (app::TypeAnalysis * this_ptr, app::Type* data_type, app::EventDataAttribute* event_attrib, app::List_1_System_Type_* recursion_check))
}

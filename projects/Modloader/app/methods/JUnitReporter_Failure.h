#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JUnitReporter_Failure.h>

namespace app::classes::JUnitReporter_Failure {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Message, (app::JUnitReporter_Failure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::JUnitReporter_Failure * this_ptr, app::String* message, app::String* type, app::String* detailed_message))
    IL2CPP_REGISTER_METHOD(0x00649230, app::String*, ToString, (app::JUnitReporter_Failure * this_ptr))
} // namespace app::classes::JUnitReporter_Failure

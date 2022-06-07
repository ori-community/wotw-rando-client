#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::JUnitReporter_Failure {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Message, (app::JUnitReporter_Failure * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::JUnitReporter_Failure * this_ptr, app::String * message, app::String * type, app::String * detailed_message))
    IL2CPP_REGISTER_METHOD(0x00649230, app::String *, ToString, (app::JUnitReporter_Failure * this_ptr))
}

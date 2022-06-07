#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::MissingMethodException {
    IL2CPP_REGISTER_METHOD(0x0226A870, void, ctor_1, (app::MissingMethodException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226A900, void, ctor_2, (app::MissingMethodException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x0226A170, void, ctor_3, (app::MissingMethodException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0226A920, app::String *, get_Message, (app::MissingMethodException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0226A300, void, ctor_4, (app::MissingMethodException * this_ptr, app::String * class_name, app::String * method_name))
    IL2CPP_REGISTER_METHOD(0x0226AA50, void, ctor_5, (app::MissingMethodException * this_ptr, app::String * class_name, app::String * method_name, app::String * signature, app::String * message))
}

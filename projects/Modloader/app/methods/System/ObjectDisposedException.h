#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ObjectDisposedException {
    IL2CPP_REGISTER_METHOD(0x0227B460, void, ctor_1, (app::ObjectDisposedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0227B500, void, ctor_2, (app::ObjectDisposedException * this_ptr, app::String* object_name))
    IL2CPP_REGISTER_METHOD(0x0227B5A0, void, ctor_3, (app::ObjectDisposedException * this_ptr, app::String* object_name, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0227B5E0, app::String*, get_Message, (app::ObjectDisposedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0227B740, app::String*, get_ObjectName, (app::ObjectDisposedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0227B810, void, ctor_4, (app::ObjectDisposedException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0227B8E0, void, GetObjectData, (app::ObjectDisposedException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::ObjectDisposedException

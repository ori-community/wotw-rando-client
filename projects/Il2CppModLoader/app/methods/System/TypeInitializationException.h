#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::TypeInitializationException {
    IL2CPP_REGISTER_METHOD(0x027C0B30, void, ctor_1, (app::TypeInitializationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C0BC0, void, ctor_2, (app::TypeInitializationException * this_ptr, app::String * full_type_name, app::Exception * inner_exception))
    IL2CPP_REGISTER_METHOD(0x027C0CF0, void, ctor_3, (app::TypeInitializationException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x027C0DC0, app::String *, get_TypeName, (app::TypeInitializationException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C0E50, void, GetObjectData, (app::TypeInitializationException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}

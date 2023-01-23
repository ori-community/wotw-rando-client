#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UriBuilder.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::UriBuilder {
    IL2CPP_REGISTER_METHOD(0x02A8E0F0, void, ctor_1, (app::UriBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A8E220, void, ctor_2, (app::UriBuilder * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHODINFO(0x04726AA8, UriBuilder__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A8E3A0, void, Init, (app::UriBuilder * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x02A8E560, void, set_Host, (app::UriBuilder * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02A8E670, void, set_Path, (app::UriBuilder * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02A8E860, void, set_Query, (app::UriBuilder * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02A8E940, void, set_Scheme, (app::UriBuilder * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04774360, UriBuilder_set_Scheme__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02A8EBE0, app::Uri*, get_Uri, (app::UriBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A8ED70, bool, Equals, (app::UriBuilder * this_ptr, app::Object* rparam))
    IL2CPP_REGISTER_METHOD(0x02A8EDE0, int32_t, GetHashCode, (app::UriBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A8EE10, void, SetFieldsFromUri, (app::UriBuilder * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x02A8EFC0, app::String*, ToString, (app::UriBuilder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FC58, UriBuilder_ToString__MethodInfo)
} // namespace app::classes::System::UriBuilder

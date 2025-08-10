#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Boxed.h>
#include <Modloader/app/structs/ObjectCreationHandling__Enum.h>

namespace app::classes::System::Nullable_1_Newtonsoft_Json_ObjectCreationHandling_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, app::Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0010E170,
        app::ObjectCreationHandling__Enum,
        GetValueOrDefault_1,
        app::Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0020E4F0,
        app::ObjectCreationHandling__Enum,
        GetValueOrDefault_2,
        app::Nullable_1_Newtonsoft_Json_ObjectCreationHandling___Boxed* this_ptr,
        app::ObjectCreationHandling__Enum default_value
    )
} // namespace app::classes::System::Nullable_1_Newtonsoft_Json_ObjectCreationHandling_

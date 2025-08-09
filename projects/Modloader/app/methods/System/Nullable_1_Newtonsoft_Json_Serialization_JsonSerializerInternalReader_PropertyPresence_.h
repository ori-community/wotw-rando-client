#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonSerializerInternalReader_PropertyPresence__Enum.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Boxed.h>

namespace app::classes::System::Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_ {
    IL2CPP_REGISTER_METHOD(
        0x0010DB80,
        void,
        ctor,
        app::Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Boxed* this_ptr,
        app::JsonSerializerInternalReader_PropertyPresence__Enum value
    )
    IL2CPP_REGISTER_METHOD(
        0x001F6090,
        bool,
        get_HasValue,
        app::Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0010E170,
        app::JsonSerializerInternalReader_PropertyPresence__Enum,
        GetValueOrDefault,
        app::Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence___Boxed* this_ptr
    )
} // namespace app::classes::System::Nullable_1_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PropertyPresence_

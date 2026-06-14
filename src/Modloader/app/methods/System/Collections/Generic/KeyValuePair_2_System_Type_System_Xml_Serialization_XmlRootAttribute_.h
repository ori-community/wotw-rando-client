#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Boxed.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlRootAttribute.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_ {
    IL2CPP_REGISTER_METHOD(
        0x00110270,
        void,
        ctor,
        app::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Boxed* this_ptr,
        app::Type* key,
        app::XmlRootAttribute* value
    )
    IL2CPP_REGISTER_METHOD(
        0x00107C10,
        app::XmlRootAttribute*,
        get_Value,
        app::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Type*, get_Key, app::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Type_System_Xml_Serialization_XmlRootAttribute_

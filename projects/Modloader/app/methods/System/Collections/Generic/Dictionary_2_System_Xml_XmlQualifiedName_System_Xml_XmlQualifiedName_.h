#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_.h>
#include <Modloader/app/structs/XmlQualifiedName.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* this_ptr,
        app::XmlQualifiedName* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* this_ptr,
        app::XmlQualifiedName* key,
        app::XmlQualifiedName* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_XmlQualifiedName_

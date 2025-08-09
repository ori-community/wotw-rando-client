#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Xml_XmlQualifiedName_.h>
#include <Modloader/app/structs/List_1_System_Xml_XmlQualifiedName_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Xml_XmlQualifiedName_.h>
#include <Modloader/app/structs/XmlQualifiedName.h>

namespace app::classes::System::Collections::Generic::List_1_System_Xml_XmlQualifiedName_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Xml_XmlQualifiedName_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Xml_XmlQualifiedName_, GetEnumerator, app::List_1_System_Xml_XmlQualifiedName_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_System_Xml_XmlQualifiedName_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FE8360,
        void,
        ctor_2,
        app::List_1_System_Xml_XmlQualifiedName_* this_ptr,
        app::IEnumerable_1_System_Xml_XmlQualifiedName_* collection
    )
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_System_Xml_XmlQualifiedName_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Xml_XmlQualifiedName_* this_ptr, app::XmlQualifiedName* item)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_System_Xml_XmlQualifiedName_* this_ptr, app::XmlQualifiedName* item)
} // namespace app::classes::System::Collections::Generic::List_1_System_Xml_XmlQualifiedName_

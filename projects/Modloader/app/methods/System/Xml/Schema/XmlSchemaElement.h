#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaDerivationMethod__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchema.h>

namespace app::classes::System::Xml::Schema::XmlSchemaElement {
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsAbstract, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA7670, void, set_IsAbstract, (app::XmlSchemaElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00C03C70, app::XmlSchemaDerivationMethod__Enum, get_Block, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_Block, (app::XmlSchemaElement * this_ptr, app::XmlSchemaDerivationMethod__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_DefaultValue, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_DefaultValue, (app::XmlSchemaElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00653FB0, app::XmlSchemaDerivationMethod__Enum, get_Final, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00881060, void, set_Final, (app::XmlSchemaElement * this_ptr, app::XmlSchemaDerivationMethod__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::String*, get_FixedValue, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_FixedValue, (app::XmlSchemaElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00989BF0, app::XmlSchemaForm__Enum, get_Form, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C9740, void, set_Form, (app::XmlSchemaElement * this_ptr, app::XmlSchemaForm__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::String*, get_Name, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_Name, (app::XmlSchemaElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00B8A120, bool, get_IsNillable, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA7680, void, set_IsNillable, (app::XmlSchemaElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01CA7690, bool, get_HasNillableAttribute, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_HasAbstractAttribute, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::XmlQualifiedName*, get_RefName, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA76A0, void, set_RefName, (app::XmlSchemaElement * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::XmlQualifiedName*, get_SubstitutionGroup, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA7790, void, set_SubstitutionGroup, (app::XmlSchemaElement * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::XmlQualifiedName*, get_SchemaTypeName, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA7880, void, set_SchemaTypeName, (app::XmlSchemaElement * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::XmlSchemaType*, get_SchemaType, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_SchemaType, (app::XmlSchemaElement * this_ptr, app::XmlSchemaType* value))
    IL2CPP_REGISTER_METHOD(0x01CA7970, app::XmlSchemaObjectCollection*, get_Constraints, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::XmlQualifiedName*, get_QualifiedName, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::XmlSchemaType*, get_ElementSchemaType, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFBD0, app::XmlSchemaDerivationMethod__Enum, get_BlockResolved, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00413180, app::XmlSchemaDerivationMethod__Enum, get_FinalResolved, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, SetQualifiedName, (app::XmlSchemaElement * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, SetElementType, (app::XmlSchemaElement * this_ptr, app::XmlSchemaType* value))
    IL2CPP_REGISTER_METHOD(0x00E6FE10, void, SetBlockResolved, (app::XmlSchemaElement * this_ptr, app::XmlSchemaDerivationMethod__Enum value))
    IL2CPP_REGISTER_METHOD(0x00413190, void, SetFinalResolved, (app::XmlSchemaElement * this_ptr, app::XmlSchemaDerivationMethod__Enum value))
    IL2CPP_REGISTER_METHOD(0x01CA7AD0, bool, get_HasConstraints, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_IsLocalTypeDerivationChecked, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFE00, void, set_IsLocalTypeDerivationChecked, (app::XmlSchemaElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::SchemaElementDecl*, get_ElementDecl, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_ElementDecl, (app::XmlSchemaElement * this_ptr, app::SchemaElementDecl* value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::String*, get_NameAttribute, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_NameAttribute, (app::XmlSchemaElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01CA7B20, app::String*, get_NameString, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA7B50, app::XmlSchemaObject*, Clone_1, (app::XmlSchemaElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA7B60, app::XmlSchemaObject*, Clone_2, (app::XmlSchemaElement * this_ptr, app::XmlSchema* parent_schema))
    IL2CPP_REGISTER_METHOD(0x01CA7E20, void, ctor, (app::XmlSchemaElement * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaElement

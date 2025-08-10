#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeData.h>
#include <Modloader/app/structs/XmlSchemaForm__Enum.h>
#include <Modloader/app/structs/XmlTypeMapElementInfo.h>
#include <Modloader/app/structs/XmlTypeMapMember.h>
#include <Modloader/app/structs/XmlTypeMapping.h>

namespace app::classes::System::Xml::Serialization::XmlTypeMapElementInfo {
    IL2CPP_REGISTER_METHOD(0x0194CD70, void, ctor, app::XmlTypeMapElementInfo* this_ptr, app::XmlTypeMapMember* member, app::TypeData* type)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::TypeData*, get_TypeData, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Object*, get_ChoiceValue, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ChoiceValue, app::XmlTypeMapElementInfo* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ElementName, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ElementName, app::XmlTypeMapElementInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Namespace, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Namespace, app::XmlTypeMapElementInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0194CE40, app::String*, get_DataTypeNamespace, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0194CED0, app::String*, get_DataTypeName, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::XmlSchemaForm__Enum, get_Form, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_Form, app::XmlTypeMapElementInfo* this_ptr, app::XmlSchemaForm__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::XmlTypeMapping*, get_MappedType, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_MappedType, app::XmlTypeMapElementInfo* this_ptr, app::XmlTypeMapping* value)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsNullable, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsNullable, app::XmlTypeMapElementInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlTypeMapMember*, get_Member, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_NestingLevel, app::XmlTypeMapElementInfo* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0194CF00, bool, get_MultiReferenceType, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_WrappedElement, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_WrappedElement, app::XmlTypeMapElementInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0194CF10, bool, get_IsTextElement, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0194CFC0, void, set_IsTextElement, app::XmlTypeMapElementInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0194D0A0, bool, get_IsUnnamedAnyElement, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0194D160, void, set_IsUnnamedAnyElement, app::XmlTypeMapElementInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_ExplicitOrder, app::XmlTypeMapElementInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_ExplicitOrder, app::XmlTypeMapElementInfo* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0194D240, bool, Equals, app::XmlTypeMapElementInfo* this_ptr, app::Object* other)
    IL2CPP_REGISTER_METHOD(0x0194D440, int32_t, GetHashCode, app::XmlTypeMapElementInfo* this_ptr)
} // namespace app::classes::System::Xml::Serialization::XmlTypeMapElementInfo

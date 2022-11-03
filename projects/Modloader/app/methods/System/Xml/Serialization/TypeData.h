#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Serialization::TypeData {
    IL2CPP_REGISTER_METHOD(0x01C903A0, void, ctor_1, (app::TypeData * this_ptr, app::Type* type, app::String* element_name, bool is_primitive))
    IL2CPP_REGISTER_METHOD(0x01C903C0, void, ctor_2, (app::TypeData * this_ptr, app::Type* type, app::String* element_name, bool is_primitive, app::TypeData* mapped_type, app::XmlSchemaPatternFacet* facet))
    IL2CPP_REGISTER_METHODINFO(0x0471A128, TypeData__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C908C0, void, LookupTypeConvertor, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C909B0, void, ConvertForAssignment, (app::TypeData * this_ptr, app::Object** value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_TypeName, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_XmlType, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_FullTypeName, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::SchemaTypes__Enum, get_SchemaType, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C90B00, bool, get_IsListType, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C90B10, bool, get_IsComplexType, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C90B30, bool, get_IsValueType, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C90C20, bool, get_IsNullable, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00575460, void, set_IsNullable, (app::TypeData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01C90D80, app::TypeData*, get_ListItemTypeData, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C90E70, app::Type*, get_ListItemType, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047331E8, TypeData_get_ListItemType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01C91630, bool, get_IsXsdType, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_HasPublicConstructor, (app::TypeData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C91640, app::PropertyInfo_1*, GetIndexerProperty, (app::Type * collection_type))
    IL2CPP_REGISTER_METHOD(0x01C917E0, app::InvalidOperationException*, CreateMissingAddMethodException, (app::Type * type, app::String* inherit_from, app::Type* argument_type))
    IL2CPP_REGISTER_METHOD(0x01C919E0, app::Type*, GetGenericListItemType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01C91C30, void, cctor, ())
} // namespace app::classes::System::Xml::Serialization::TypeData

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SerializationFormat__Enum_1.h>
#include <Modloader/app/structs/SchemaSerializationMode__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/ISite.h>
#include <Modloader/app/structs/DataRelationCollection.h>
#include <Modloader/app/structs/DataTableCollection.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlWriter.h>
#include <Modloader/app/structs/SchemaFormat__Enum.h>
#include <Modloader/app/structs/Converter_2_Type_String_.h>
#include <Modloader/app/structs/XmlReadMode__Enum.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XmlWriteMode__Enum.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#include <Modloader/app/structs/MergeFailedEventArgs.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/DataTable__Array.h>
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlSchema.h>

namespace app::classes::System::Data::DataSet {
    IL2CPP_REGISTER_METHOD(0x017E2750, void, ctor_1, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E2B90, void, ctor_2, (app::DataSet * this_ptr, app::String* data_set_name))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::SerializationFormat__Enum_1, get_RemotingFormat, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E2BC0, void, set_RemotingFormat, (app::DataSet * this_ptr, app::SerializationFormat__Enum_1 value))
    IL2CPP_REGISTER_METHODINFO(0x04705048, DataSet_set_RemotingFormat__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417920, app::SchemaSerializationMode__Enum, get_SchemaSerializationMode, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E2CE0, void, ctor_3, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x017E2D10, void, ctor_4, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context, bool construct_schema))
    IL2CPP_REGISTER_METHOD(0x017E2FE0, void, GetObjectData, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeDerivedDataSet, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E3010, void, SerializeDataSet, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context, app::SerializationFormat__Enum_1 remoting_format))
    IL2CPP_REGISTER_METHOD(0x017E3AA0, void, DeserializeDataSet, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context, app::SerializationFormat__Enum_1 remoting_format, app::SchemaSerializationMode__Enum schema_serialization_mode))
    IL2CPP_REGISTER_METHOD(0x017E3B20, void, DeserializeDataSetSchema, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context, app::SerializationFormat__Enum_1 remoting_format, app::SchemaSerializationMode__Enum schema_serialization_mode))
    IL2CPP_REGISTER_METHOD(0x017E4200, void, DeserializeDataSetData, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context, app::SerializationFormat__Enum_1 remoting_format))
    IL2CPP_REGISTER_METHOD(0x017E4550, void, SerializeDataSetProperties, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x017E46A0, void, DeserializeDataSetProperties, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x017E4980, void, SerializeRelations, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x017E5050, void, DeserializeRelations, (app::DataSet * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x017E5800, void, FailedEnableConstraints, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472CD48, DataSet_FailedEnableConstraints__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_CaseSensitive, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E5850, void, set_CaseSensitive, (app::DataSet * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x04782A00, DataSet_set_CaseSensitive__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IListSource_get_ContainsListCollection, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E5B20, app::DataViewManager*, get_DefaultViewManager, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_EnforceConstraints, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E5D60, void, set_EnforceConstraints, (app::DataSet * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00585320, void, RestoreEnforceConstraints, (app::DataSet * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x017E5F10, void, EnableConstraints, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_DataSetName, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E6600, void, set_DataSetName, (app::DataSet * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0478E2A8, DataSet_set_DataSetName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Namespace, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E6780, void, set_Namespace, (app::DataSet * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04793620, DataSet_set_Namespace__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_Prefix, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E6B00, void, set_Prefix, (app::DataSet * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0476DAD8, DataSet_set_Prefix__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017E6CA0, app::PropertyCollection*, get_ExtendedProperties, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E6E10, bool, get_IsInitialized, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::CultureInfo*, get_Locale, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E6E20, void, set_Locale, (app::DataSet * this_ptr, app::CultureInfo* value))
    IL2CPP_REGISTER_METHOD(0x017E6FF0, void, SetLocaleValue, (app::DataSet * this_ptr, app::CultureInfo* value, bool user_set))
    IL2CPP_REGISTER_METHODINFO(0x04779950, DataSet_SetLocaleValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, ShouldSerializeLocale, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ISite*, get_Site, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E7980, void, set_Site, (app::DataSet * this_ptr, app::ISite* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::DataRelationCollection*, get_Relations, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::DataTableCollection*, get_Tables, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E7B10, void, add_Initialized, (app::DataSet * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x017E7C00, void, remove_Initialized, (app::DataSet * this_ptr, app::EventHandler* value))
    IL2CPP_REGISTER_METHOD(0x00F01330, void, BeginInit, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E7CF0, void, EndInit, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E7FF0, void, Clear, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E8220, app::DataSet*, Clone, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E8FA0, int32_t, EstimatedXmlStringSize, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E9130, app::IList*, IListSource_GetList, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E9140, app::String*, GetRemotingDiffGram, (app::DataSet * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x017E94B0, app::String*, GetXmlSchemaForRemoting, (app::DataSet * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x017E9A20, void, ReadXmlSchema_1, (app::DataSet * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x017E9A30, void, ReadXmlSchema_2, (app::DataSet * this_ptr, app::XmlReader* reader, bool deny_resolving))
    IL2CPP_REGISTER_METHODINFO(0x04773D90, DataSet_ReadXmlSchema_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017EA650, bool, MoveToElement_1, (app::DataSet * this_ptr, app::XmlReader* reader, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x017EA710, void, MoveToElement_2, (app::XmlReader * reader))
    IL2CPP_REGISTER_METHOD(0x017EA790, void, ReadEndElement, (app::DataSet * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x017EA840, void, ReadXSDSchema, (app::DataSet * this_ptr, app::XmlReader* reader, bool deny_resolving))
    IL2CPP_REGISTER_METHOD(0x017EAD00, void, ReadXDRSchema, (app::DataSet * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x017EB070, void, WriteXmlSchema, (app::DataSet * this_ptr, app::XmlWriter* writer, app::SchemaFormat__Enum schema_format, app::Converter_2_Type_String_* multiple_target_converter))
    IL2CPP_REGISTER_METHOD(0x017EB450, app::XmlReadMode__Enum, ReadXml_1, (app::DataSet * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x017EB460, app::XmlReadMode__Enum, ReadXml_2, (app::DataSet * this_ptr, app::XmlReader* reader, bool deny_resolving))
    IL2CPP_REGISTER_METHODINFO(0x0473EB78, DataSet_ReadXml_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017ECA90, void, InferSchema, (app::DataSet * this_ptr, app::XmlDocument* xdoc, app::String__Array* excluded_namespaces, app::XmlReadMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x017ED1F0, bool, IsEmpty, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017ED470, void, ReadXmlDiffgram, (app::DataSet * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHODINFO(0x04771D88, DataSet_ReadXmlDiffgram__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017EE830, app::XmlReadMode__Enum, ReadXml_3, (app::DataSet * this_ptr, app::XmlReader* reader, app::XmlReadMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x017EE850, app::XmlReadMode__Enum, ReadXml_4, (app::DataSet * this_ptr, app::XmlReader* reader, app::XmlReadMode__Enum mode, bool deny_resolving))
    IL2CPP_REGISTER_METHODINFO(0x047390F8, DataSet_ReadXml_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017EFBE0, void, WriteXml, (app::DataSet * this_ptr, app::XmlWriter* writer, app::XmlWriteMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x017EFFA0, void, Merge_1, (app::DataSet * this_ptr, app::DataSet* data_set))
    IL2CPP_REGISTER_METHOD(0x017F0150, void, Merge_2, (app::DataSet * this_ptr, app::DataSet* data_set, bool preserve_changes, app::MissingSchemaAction__Enum missing_schema_action))
    IL2CPP_REGISTER_METHODINFO(0x04739CE8, DataSet_Merge_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017F0490, void, OnPropertyChanging, (app::DataSet * this_ptr, app::PropertyChangedEventArgs* pcevent))
    IL2CPP_REGISTER_METHOD(0x017F04B0, void, OnMergeFailed, (app::DataSet * this_ptr, app::MergeFailedEventArgs* mfevent))
    IL2CPP_REGISTER_METHODINFO(0x04737E30, DataSet_OnMergeFailed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017F0580, void, RaiseMergeFailed, (app::DataSet * this_ptr, app::DataTable* table, app::String* conflict, app::MissingSchemaAction__Enum missing_schema_action))
    IL2CPP_REGISTER_METHODINFO(0x047636B8, DataSet_RaiseMergeFailed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017F0810, void, OnDataRowCreated, (app::DataSet * this_ptr, app::DataRow* row))
    IL2CPP_REGISTER_METHOD(0x017F0830, void, OnClearFunctionCalled, (app::DataSet * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x017F0850, void, OnInitialized, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveTable, (app::DataSet * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x017F0920, void, OnRemovedTable, (app::DataSet * this_ptr, app::DataTable* table))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveRelation, (app::DataSet * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHOD(0x017F0970, void, OnRemoveRelationHack, (app::DataSet * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHOD(0x017F0990, void, RaisePropertyChanging, (app::DataSet * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x017F0AF0, app::DataTable__Array*, TopLevelTables_1, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017F0B00, app::DataTable__Array*, TopLevelTables_2, (app::DataSet * this_ptr, bool for_schema))
    IL2CPP_REGISTER_METHOD(0x017F0E40, void, Reset, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017F1100, bool, ValidateCaseConstraint, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017F1520, bool, ValidateLocaleConstraint, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017F19C0, app::DataTable*, FindTable, (app::DataSet * this_ptr, app::DataTable* base_table, app::PropertyDescriptor__Array* props, int32_t prop_start))
    IL2CPP_REGISTER_METHOD(0x017F1B70, void, ReadXmlSerializable, (app::DataSet * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHODINFO(0x0473BF78, DataSet_ReadXmlSerializable__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017F21A0, app::XmlSchemaComplexType*, GetDataSetSchema, (app::XmlSchemaSet * schema_set))
    IL2CPP_REGISTER_METHOD(0x017F2780, app::XmlSchema*, IXmlSerializable_GetSchema, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017F2C10, void, IXmlSerializable_ReadXml, (app::DataSet * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHOD(0x017F2DB0, void, IXmlSerializable_WriteXml, (app::DataSet * this_ptr, app::XmlWriter* writer))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::String*, get_MainTableName, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_MainTableName, (app::DataSet * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_ObjectID, (app::DataSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::Data::DataSet

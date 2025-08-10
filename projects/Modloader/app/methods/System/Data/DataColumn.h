#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AggregateType__Enum.h>
#include <Modloader/app/structs/AutoIncrementValue.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataExpression.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowAction__Enum.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataSetDateTime__Enum.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/MappingType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/SimpleType.h>
#include <Modloader/app/structs/StorageType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlRootAttribute.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::DataColumn {
    IL2CPP_REGISTER_METHOD(0x02392480, void, ctor_1, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02392550, void, ctor_2, app::DataColumn* this_ptr, app::String* column_name, app::Type* data_type)
    IL2CPP_REGISTER_METHOD(
        0x02392580,
        void,
        ctor_3,
        app::DataColumn* this_ptr,
        app::String* column_name,
        app::Type* data_type,
        app::String* expr,
        app::MappingType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x02392890, void, UpdateColumnType, app::DataColumn* this_ptr, app::Type* type, app::StorageType__Enum type_code)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_AllowDBNull, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02392AE0, void, set_AllowDBNull, app::DataColumn* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02392CB0, bool, get_AutoIncrement, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02392CD0, void, set_AutoIncrement, app::DataColumn* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02392EC0, app::Object*, get_AutoIncrementCurrent, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02392F80, void, set_AutoIncrementCurrent, app::DataColumn* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x023930E0, app::AutoIncrementValue*, get_AutoInc, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02393340, int64_t, get_AutoIncrementSeed, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02393360, void, set_AutoIncrementSeed, app::DataColumn* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02393490, int64_t, get_AutoIncrementStep, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023934C0, void, set_AutoIncrementStep, app::DataColumn* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x023935F0, app::String*, get_Caption, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02393600, void, set_Caption, app::DataColumn* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_ColumnName, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023936E0, void, set_ColumnName, app::DataColumn* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02393C40, app::String*, get_EncodedColumnName, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02393D00, app::IFormatProvider*, get_FormatProvider, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02393DC0, app::CultureInfo*, get_Locale, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFBD0, int32_t, get_ObjectID, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::String*, get_Prefix, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02393E80, void, set_Prefix, app::DataColumn* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02394030, app::String*, GetColumnValueAsString, app::DataColumn* this_ptr, app::DataRow* row, app::DataRowVersion__Enum version)
    IL2CPP_REGISTER_METHOD(0x02394170, bool, get_Computed, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::DataExpression*, get_DataExpression, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Type*, get_DataType, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02394180, void, set_DataType, app::DataColumn* this_ptr, app::Type* value)
    IL2CPP_REGISTER_METHOD(0x002FD490, app::DataSetDateTime__Enum, get_DateTimeMode, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02394A90, void, set_DateTimeMode, app::DataColumn* this_ptr, app::DataSetDateTime__Enum value)
    IL2CPP_REGISTER_METHOD(0x02394C20, app::Object*, get_DefaultValue, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02394DA0, void, set_DefaultValue, app::DataColumn* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00E855A0, bool, get_DefaultValueIsNull, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02395090, void, BindExpression, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023950C0, app::String*, get_Expression, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02395150, void, set_Expression, app::DataColumn* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02395940, app::PropertyCollection*, get_ExtendedProperties, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02395AB0, bool, get_HasData, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AB7980, bool, get_ImplementsINullable, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02395AC0, bool, get_ImplementsIChangeTracking, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019712A0, bool, get_ImplementsIRevertibleChangeTracking, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02395AD0, bool, get_IsValueType, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSqlType, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02395AF0, void, SetMaxLengthSimpleType, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_MaxLength, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02395DF0, void, set_MaxLength, app::DataColumn* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02396110, app::String*, get_Namespace, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023961C0, void, set_Namespace, app::DataColumn* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x003FF3C0, int32_t, get_Ordinal, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02396340, void, SetOrdinalInternal, app::DataColumn* this_ptr, int32_t ordinal)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_ReadOnly, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023965A0, void, set_ReadOnly, app::DataColumn* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x023966A0, app::Index*, get_SortIndex, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::DataTable*, get_Table, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023967B0, void, SetTable, app::DataColumn* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x02396880, app::DataRow*, GetDataRow, app::DataColumn* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x023968E0, app::Object*, get_Item, app::DataColumn* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02396910, void, set_Item, app::DataColumn* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02396B20, void, InitializeRecord, app::DataColumn* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02396B70, void, SetValue, app::DataColumn* this_ptr, int32_t record, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02396CE0, void, FreeRecord, app::DataColumn* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_Unique, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02396D10, void, set_Unique, app::DataColumn* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, InternalUnique, app::DataColumn* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00660430, app::String*, get_XmlDataType, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660440, void, set_XmlDataType, app::DataColumn* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::SimpleType*, get_SimpleType, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02397240, void, set_SimpleType, app::DataColumn* this_ptr, app::SimpleType* value)
    IL2CPP_REGISTER_METHOD(0x00653FB0, app::MappingType__Enum, get_ColumnMapping, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02397290, void, set_ColumnMapping, app::DataColumn* this_ptr, app::MappingType__Enum value)
    IL2CPP_REGISTER_METHOD(0x02397550, void, CheckColumnConstraint, app::DataColumn* this_ptr, app::DataRow* row, app::DataRowAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x02397750, bool, CheckMaxLength_1, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02397A30, void, CheckMaxLength_2, app::DataColumn* this_ptr, app::DataRow* dr)
    IL2CPP_REGISTER_METHOD(0x02397B20, void, CheckNotAllowNull, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02397E00, void, CheckNullable, app::DataColumn* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x02397EF0, void, CheckUnique, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02397FB0, int32_t, Compare, app::DataColumn* this_ptr, int32_t record1, int32_t record2)
    IL2CPP_REGISTER_METHOD(0x02397FE0, bool, CompareValueTo_1, app::DataColumn* this_ptr, int32_t record1, app::Object* value, bool check_type)
    IL2CPP_REGISTER_METHOD(0x02398250, int32_t, CompareValueTo_2, app::DataColumn* this_ptr, int32_t record1, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02398280, app::Object*, ConvertValue, app::DataColumn* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x023982B0, void, Copy, app::DataColumn* this_ptr, int32_t src_record_no, int32_t dst_record_no)
    IL2CPP_REGISTER_METHOD(0x023982E0, app::DataColumn*, Clone, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02398760, app::Object*, GetAggregateValue, app::DataColumn* this_ptr, app::Int32__Array* records, app::AggregateType__Enum kind)
    IL2CPP_REGISTER_METHOD(0x02398870, int32_t, GetStringLength, app::DataColumn* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x023988A0, void, Init, app::DataColumn* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x02398950, bool, IsAutoIncrementType, app::Type* data_type)
    IL2CPP_REGISTER_METHOD(0x02398BD0, bool, get_IsCustomType, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02398C90, bool, IsValueCustomTypeInstance, app::DataColumn* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_ImplementsIXMLSerializable, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02398DC0, bool, IsInRelation, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02398F80, bool, IsMaxLengthViolated, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02399330, bool, IsNotAllowDBNullViolated, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02399560, void, FinishInitInProgress, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020B9430, void, OnPropertyChanging, app::DataColumn* this_ptr, app::PropertyChangedEventArgs* pcevent)
    IL2CPP_REGISTER_METHOD(0x02399580, void, RaisePropertyChanging, app::DataColumn* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023996E0, void, InsureStorage, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023997B0, void, SetCapacity, app::DataColumn* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSetDataSet, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02399800, app::String*, ToString, app::DataColumn* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023998C0, app::Object*, ConvertXmlToObject_1, app::DataColumn* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(
        0x02399910,
        app::Object*,
        ConvertXmlToObject_2,
        app::DataColumn* this_ptr,
        app::XmlReader* xml_reader,
        app::XmlRootAttribute* xml_attrib
    )
    IL2CPP_REGISTER_METHOD(0x02399970, app::String*, ConvertObjectToXml_1, app::DataColumn* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x023999C0,
        void,
        ConvertObjectToXml_2,
        app::DataColumn* this_ptr,
        app::Object* value,
        app::XmlWriter* xml_writer,
        app::XmlRootAttribute* xml_attrib
    )
    IL2CPP_REGISTER_METHOD(0x02399A30, app::Object*, GetEmptyColumnStore, app::DataColumn* this_ptr, int32_t record_count)
    IL2CPP_REGISTER_METHOD(
        0x02399A80,
        void,
        CopyValueIntoStore,
        app::DataColumn* this_ptr,
        int32_t record,
        app::Object* store,
        app::BitArray* nullbits,
        int32_t store_index
    )
    IL2CPP_REGISTER_METHOD(0x02399AB0, void, SetStorage, app::DataColumn* this_ptr, app::Object* store, app::BitArray* nullbits)
    IL2CPP_REGISTER_METHOD(0x02399B10, void, AddDependentColumn, app::DataColumn* this_ptr, app::DataColumn* expression_column)
    IL2CPP_REGISTER_METHOD(0x02399CB0, void, RemoveDependentColumn, app::DataColumn* this_ptr, app::DataColumn* expression_column)
    IL2CPP_REGISTER_METHOD(
        0x02399D90,
        void,
        HandleDependentColumnList,
        app::DataColumn* this_ptr,
        app::DataExpression* old_expression,
        app::DataExpression* new_expression
    )
} // namespace app::classes::System::Data::DataColumn

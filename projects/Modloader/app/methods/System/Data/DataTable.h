#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/BitArray.h>
#include <Modloader/app/structs/CompareInfo.h>
#include <Modloader/app/structs/ConstraintCollection.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumnChangeEventArgs.h>
#include <Modloader/app/structs/DataColumnCollection.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataRelationCollection.h>
#include <Modloader/app/structs/DataRelation__Array.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowAction__Enum.h>
#include <Modloader/app/structs/DataRowBuilder.h>
#include <Modloader/app/structs/DataRowChangeEventArgs.h>
#include <Modloader/app/structs/DataRowCollection.h>
#include <Modloader/app/structs/DataRowState__Enum.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/DataTableClearEventArgs.h>
#include <Modloader/app/structs/DataTableNewRowEventArgs.h>
#include <Modloader/app/structs/DataView.h>
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/IFilter.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/ISite.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/IndexField__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_Data_DataColumn_.h>
#include <Modloader/app/structs/List_1_System_Data_DataRelation_.h>
#include <Modloader/app/structs/List_1_System_Data_DataRow_.h>
#include <Modloader/app/structs/List_1_System_Data_DataTable_.h>
#include <Modloader/app/structs/List_1_System_Data_DataViewListener_.h>
#include <Modloader/app/structs/List_1_System_Data_Index_.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/SerializationFormat__Enum_1.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlReadMode__Enum.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaComplexType.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#include <Modloader/app/structs/XmlWriteMode__Enum.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Data::DataTable {
    IL2CPP_REGISTER_METHOD(0x017F2E00, void, ctor_1, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017F39A0, void, ctor_2, app::DataTable* this_ptr, app::String* table_name)
    IL2CPP_REGISTER_METHOD(0x017F3A50, void, ctor_3, app::DataTable* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x017F3CA0, void, GetObjectData, app::DataTable* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(
        0x017F3DD0,
        void,
        SerializeDataTable,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        bool is_single_table,
        app::SerializationFormat__Enum_1 remoting_format
    )
    IL2CPP_REGISTER_METHOD(
        0x017F4260,
        void,
        DeserializeDataTable,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        bool is_single_table,
        app::SerializationFormat__Enum_1 remoting_format
    )
    IL2CPP_REGISTER_METHOD(
        0x017F4920,
        void,
        SerializeTableSchema,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        bool is_single_table
    )
    IL2CPP_REGISTER_METHOD(
        0x017F6280,
        void,
        DeserializeTableSchema,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        bool is_single_table
    )
    IL2CPP_REGISTER_METHOD(
        0x017F7200,
        void,
        SerializeConstraints,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        int32_t ser_index,
        bool all_constraints
    )
    IL2CPP_REGISTER_METHOD(
        0x017F7C80,
        void,
        DeserializeConstraints,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        int32_t ser_index,
        bool all_constraints
    )
    IL2CPP_REGISTER_METHOD(
        0x017F87F0,
        void,
        SerializeExpressionColumns,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        int32_t ser_index
    )
    IL2CPP_REGISTER_METHOD(
        0x017F89A0,
        void,
        DeserializeExpressionColumns,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        int32_t ser_index
    )
    IL2CPP_REGISTER_METHOD(
        0x017F8B60,
        void,
        SerializeTableData,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        int32_t ser_index
    )
    IL2CPP_REGISTER_METHOD(
        0x017F9B20,
        void,
        DeserializeTableData,
        app::DataTable* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        int32_t ser_index
    )
    IL2CPP_REGISTER_METHOD(0x017FA6A0, app::DataRowState__Enum, ConvertToRowState, app::DataTable* this_ptr, app::BitArray* bit_states, int32_t bit_index)
    IL2CPP_REGISTER_METHOD(
        0x017FA7B0,
        void,
        GetRowAndColumnErrors,
        app::DataTable* this_ptr,
        int32_t row_index,
        app::Hashtable* row_errors,
        app::Hashtable* col_errors
    )
    IL2CPP_REGISTER_METHOD(
        0x017FAC20,
        void,
        ConvertToRowError,
        app::DataTable* this_ptr,
        int32_t row_index,
        app::Hashtable* row_errors,
        app::Hashtable* col_errors
    )
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_CaseSensitive, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FB020, void, set_CaseSensitive, app::DataTable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x017FB140, bool, get_AreIndexEventsSuspended, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FB150, void, RestoreIndexEvents, app::DataTable* this_ptr, bool force_reset)
    IL2CPP_REGISTER_METHOD(0x017FB480, void, SuspendIndexEvents, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01116B20, bool, get_IsInitialized, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FB550, bool, get_IsTypedDataTable, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FB630, bool, SetCaseSensitiveValue, app::DataTable* this_ptr, bool is_case_sensitive, bool user_set, bool reset_indexes)
    IL2CPP_REGISTER_METHOD(0x017FB910, bool, ShouldSerializeCaseSensitive, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FB920, bool, get_SelfNested, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FBB80, app::List_1_System_Data_Index_*, get_LiveIndexes, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FBC80, app::SerializationFormat__Enum_1, get_RemotingFormat, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FBC90, void, set_RemotingFormat, app::DataTable* this_ptr, app::SerializationFormat__Enum_1 value)
    IL2CPP_REGISTER_METHOD(0x017FBD60, int32_t, get_UKColumnPositionForInference, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FBD70, void, set_UKColumnPositionForInference, app::DataTable* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x017FBD80, app::DataRelationCollection*, get_ChildRelations, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::DataColumnCollection*, get_Columns, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FBEE0, app::CompareInfo*, get_CompareInfo, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::ConstraintCollection*, get_Constraints, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FBF30, void, ResetConstraints, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::DataSet*, get_DataSet, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FBF50, void, SetDataSet, app::DataTable* this_ptr, app::DataSet* data_set)
    IL2CPP_REGISTER_METHOD(0x017FC010, app::DataView*, get_DefaultView, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FC1E0, app::String*, get_DisplayExpressionInternal, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FC280, bool, get_EnforceConstraints, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FC2B0, void, set_EnforceConstraints, app::DataTable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x017FC2F0, bool, get_SuspendEnforceConstraints, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FC300, void, set_SuspendEnforceConstraints, app::DataTable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x017FC310, void, EnableConstraints, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FC880, app::PropertyCollection*, get_ExtendedProperties, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FC9F0, app::IFormatProvider*, get_FormatProvider, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::CultureInfo*, get_Locale, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FCAE0, void, set_Locale, app::DataTable* this_ptr, app::CultureInfo* value)
    IL2CPP_REGISTER_METHOD(0x017FCF10, bool, SetLocaleValue, app::DataTable* this_ptr, app::CultureInfo* culture, bool user_set, bool reset_indexes)
    IL2CPP_REGISTER_METHOD(0x00601090, bool, ShouldSerializeLocale, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FD430, int32_t, get_MinimumCapacity, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FD450, void, set_MinimumCapacity, app::DataTable* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x017FD520, int32_t, get_RecordCapacity, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_ElementColumnCount, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FD540, void, set_ElementColumnCount, app::DataTable* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x017FD5F0, app::DataRelationCollection*, get_ParentRelations, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A390, bool, get_MergingData, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068A3A0, void, set_MergingData, app::DataTable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00A5BA40, app::DataRelation__Array*, get_NestedParentRelations, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FD750, bool, get_SchemaLoading, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FD760, void, CacheNestedParent, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FD780, app::DataRelation__Array*, FindNestedParentRelations, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FDB40, int32_t, get_NestedParentsCount, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FDDF0, app::DataColumn__Array*, get_PrimaryKey, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FDEA0, void, set_PrimaryKey, app::DataTable* this_ptr, app::DataColumn__Array* value)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DataRowCollection*, get_Rows, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_TableName, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FE4B0, void, set_TableName, app::DataTable* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x017FEA90, app::String*, get_EncodedTableName, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FEB50, app::String*, GetInheritedNamespace, app::DataTable* this_ptr, app::List_1_System_Data_DataTable_* visited_tables)
    IL2CPP_REGISTER_METHOD(0x017FEE30, app::String*, get_Namespace, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FEFA0, void, set_Namespace, app::DataTable* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x017FF350, bool, IsNamespaceInherited, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017FF360, void, CheckCascadingNamespaceConflict, app::DataTable* this_ptr, app::String* real_namespace)
    IL2CPP_REGISTER_METHOD(0x017FF660, void, CheckNamespaceValidityForNestedRelations, app::DataTable* this_ptr, app::String* real_namespace)
    IL2CPP_REGISTER_METHOD(
        0x017FFB30,
        void,
        CheckNamespaceValidityForNestedParentRelations,
        app::DataTable* this_ptr,
        app::String* ns,
        app::DataTable* parent_table
    )
    IL2CPP_REGISTER_METHOD(0x017FFDD0, void, DoRaiseNamespaceChange, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01800300, void, BeginInit, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01800310, void, EndInit, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::String*, get_Prefix, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01800830, void, set_Prefix, app::DataTable* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::DataColumn*, get_XmlText, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018009E0, void, set_XmlText, app::DataTable* this_ptr, app::DataColumn* value)
    IL2CPP_REGISTER_METHOD(0x01800B10, app::Decimal, get_MaxOccurs, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01800B20, void, set_MaxOccurs, app::DataTable* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x00D7D770, app::Decimal, get_MinOccurs, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D7D780, void, set_MinOccurs, app::DataTable* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01800B30, void, SetKeyValues, app::DataTable* this_ptr, app::DataKey key, app::Object__Array* key_values, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01800BE0, app::DataRow*, FindByIndex, app::DataTable* this_ptr, app::Index* ndx, app::Object__Array* key)
    IL2CPP_REGISTER_METHOD(0x01800D00, app::DataRow*, FindMergeTarget, app::DataTable* this_ptr, app::DataRow* row, app::DataKey key, app::Index* ndx)
    IL2CPP_REGISTER_METHOD(
        0x01800E60,
        void,
        SetMergeRecords,
        app::DataTable* this_ptr,
        app::DataRow* row,
        int32_t new_record,
        int32_t old_record,
        app::DataRowAction__Enum action
    )
    IL2CPP_REGISTER_METHOD(
        0x01800F20,
        app::DataRow*,
        MergeRow,
        app::DataTable* this_ptr,
        app::DataRow* row,
        app::DataRow* target_row,
        bool preserve_changes,
        app::Index* idx_search
    )
    IL2CPP_REGISTER_METHOD(0x01801650, app::DataTable*, CreateInstance, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01801740, app::DataTable*, Clone_1, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01801750, app::DataTable*, Clone_2, app::DataTable* this_ptr, app::DataSet* clone_d_s)
    IL2CPP_REGISTER_METHOD(
        0x01801990,
        app::DataTable*,
        IncrementalCloneTo,
        app::DataTable* this_ptr,
        app::DataTable* source_table,
        app::DataTable* target_table
    )
    IL2CPP_REGISTER_METHOD(
        0x01801C60,
        app::DataTable*,
        CloneHierarchy,
        app::DataTable* this_ptr,
        app::DataTable* source_table,
        app::DataSet* ds,
        app::Hashtable* visited_map
    )
    IL2CPP_REGISTER_METHOD(
        0x01802230,
        app::DataTable*,
        CloneTo,
        app::DataTable* this_ptr,
        app::DataTable* clone,
        app::DataSet* clone_d_s,
        bool skip_expression_columns
    )
    IL2CPP_REGISTER_METHOD(0x01802EB0, void, add_Initialized, app::DataTable* this_ptr, app::EventHandler* value)
    IL2CPP_REGISTER_METHOD(0x01802F70, void, remove_Initialized, app::DataTable* this_ptr, app::EventHandler* value)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ISite*, get_Site, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01803030, void, set_Site, app::DataTable* this_ptr, app::ISite* value)
    IL2CPP_REGISTER_METHOD(0x018031C0, void, AddRow, app::DataTable* this_ptr, app::DataRow* row, int32_t proposed_i_d)
    IL2CPP_REGISTER_METHOD(0x018031F0, void, InsertRow_1, app::DataTable* this_ptr, app::DataRow* row, int32_t proposed_i_d, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01803210, void, InsertRow_2, app::DataTable* this_ptr, app::DataRow* row, int64_t proposed_i_d, int32_t pos, bool fire_event)
    IL2CPP_REGISTER_METHOD(0x018035A0, void, CheckNotModifying, app::DataTable* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x018035D0, void, Clear_1, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018035E0, void, Clear_2, app::DataTable* this_ptr, bool clear_all)
    IL2CPP_REGISTER_METHOD(0x01803FA0, void, CascadeAll, app::DataTable* this_ptr, app::DataRow* row, app::DataRowAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x01804170, void, CommitRow, app::DataTable* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x01804210, int32_t, Compare_1, app::DataTable* this_ptr, app::String* s1, app::String* s2)
    IL2CPP_REGISTER_METHOD(0x01804230, int32_t, Compare_2, app::DataTable* this_ptr, app::String* s1, app::String* s2, app::CompareInfo* comparer)
    IL2CPP_REGISTER_METHOD(0x018043B0, int32_t, IndexOf, app::DataTable* this_ptr, app::String* s1, app::String* s2)
    IL2CPP_REGISTER_METHOD(0x01804440, bool, IsSuffix, app::DataTable* this_ptr, app::String* s1, app::String* s2)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IListSource_get_ContainsListCollection, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018044D0, void, DeleteRow, app::DataTable* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x018045B0, app::String*, FormatSortString, app::DataTable* this_ptr, app::IndexField__Array* index_desc)
    IL2CPP_REGISTER_METHOD(0x018047D0, void, FreeRecord, app::DataTable* this_ptr, int32_t* record)
    IL2CPP_REGISTER_METHOD(
        0x018047F0,
        app::Index*,
        GetIndex_1,
        app::DataTable* this_ptr,
        app::String* sort,
        app::DataViewRowState__Enum record_states,
        app::IFilter* row_filter
    )
    IL2CPP_REGISTER_METHOD(
        0x01804840,
        app::Index*,
        GetIndex_2,
        app::DataTable* this_ptr,
        app::IndexField__Array* index_desc,
        app::DataViewRowState__Enum record_states,
        app::IFilter* row_filter
    )
    IL2CPP_REGISTER_METHOD(0x01804B50, app::IList*, IListSource_GetList, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006C8770, app::List_1_System_Data_DataViewListener_*, GetListeners, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01804B60, int32_t, GetSpecialHashCode, app::DataTable* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01804CA0, void, InsertRow_3, app::DataTable* this_ptr, app::DataRow* row, int64_t proposed_i_d)
    IL2CPP_REGISTER_METHOD(0x018050E0, int32_t, NewRecord_1, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018050F0, int32_t, NewUninitializedRecord, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01805110, int32_t, NewRecord_2, app::DataTable* this_ptr, int32_t source_record)
    IL2CPP_REGISTER_METHOD(0x01805240, app::DataRow*, NewEmptyRow, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018052B0, app::DataRow*, NewUninitializedRow, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018052F0, app::DataRow*, NewRow_1, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018053A0, app::DataRow*, CreateEmptyRow, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018056A0, void, NewRowCreated, app::DataTable* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(0x01805890, app::DataRow*, NewRow_2, app::DataTable* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x01805940, app::DataRow*, NewRowFromBuilder, app::DataTable* this_ptr, app::DataRowBuilder* builder)
    IL2CPP_REGISTER_METHOD(0x01805B30, app::Type*, GetRowType, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01805BD0, app::DataRow__Array*, NewRowArray, app::DataTable* this_ptr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x01805D60, bool, get_NeedColumnChangeEvents, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01805DA0, void, OnColumnChanging, app::DataTable* this_ptr, app::DataColumnChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01805EA0, void, OnColumnChanged, app::DataTable* this_ptr, app::DataColumnChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01805FA0, void, OnPropertyChanging, app::DataTable* this_ptr, app::PropertyChangedEventArgs* pcevent)
    IL2CPP_REGISTER_METHOD(0x0171CA40, void, OnRemoveColumnInternal, app::DataTable* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveColumn, app::DataTable* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(
        0x018060A0,
        app::DataRowChangeEventArgs*,
        OnRowChanged_1,
        app::DataTable* this_ptr,
        app::DataRowChangeEventArgs* args,
        app::DataRow* e_row,
        app::DataRowAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(
        0x01806240,
        app::DataRowChangeEventArgs*,
        OnRowChanging_1,
        app::DataTable* this_ptr,
        app::DataRowChangeEventArgs* args,
        app::DataRow* e_row,
        app::DataRowAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(0x018063E0, void, OnRowChanged_2, app::DataTable* this_ptr, app::DataRowChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x018064E0, void, OnRowChanging_2, app::DataTable* this_ptr, app::DataRowChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x018065E0, void, OnRowDeleting, app::DataTable* this_ptr, app::DataRowChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x018066E0, void, OnRowDeleted, app::DataTable* this_ptr, app::DataRowChangeEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x018067E0, void, OnTableCleared, app::DataTable* this_ptr, app::DataTableClearEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x018068E0, void, OnTableClearing, app::DataTable* this_ptr, app::DataTableClearEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x018069E0, void, OnTableNewRow, app::DataTable* this_ptr, app::DataTableNewRowEventArgs* e)
    IL2CPP_REGISTER_METHOD(0x01806AE0, void, OnInitialized, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01806C10, app::IndexField__Array*, ParseSortString, app::DataTable* this_ptr, app::String* sort_string)
    IL2CPP_REGISTER_METHOD(0x018071A0, void, RaisePropertyChanging, app::DataTable* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01807300, void, RecordChanged_1, app::DataTable* this_ptr, int32_t record)
    IL2CPP_REGISTER_METHOD(0x018074C0, void, RecordChanged_2, app::DataTable* this_ptr, app::Int32__Array* old_index, app::Int32__Array* new_index)
    IL2CPP_REGISTER_METHOD(
        0x018076D0,
        void,
        RecordStateChanged_1,
        app::DataTable* this_ptr,
        int32_t record,
        app::DataViewRowState__Enum old_state,
        app::DataViewRowState__Enum new_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01807890,
        void,
        RecordStateChanged_2,
        app::DataTable* this_ptr,
        int32_t record1,
        app::DataViewRowState__Enum old_state1,
        app::DataViewRowState__Enum new_state1,
        int32_t record2,
        app::DataViewRowState__Enum old_state2,
        app::DataViewRowState__Enum new_state2
    )
    IL2CPP_REGISTER_METHOD(
        0x01807AC0,
        app::Int32__Array*,
        RemoveRecordFromIndexes,
        app::DataTable* this_ptr,
        app::DataRow* row,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(
        0x01807D70,
        app::Int32__Array*,
        InsertRecordToIndexes,
        app::DataTable* this_ptr,
        app::DataRow* row,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(
        0x01807FA0,
        void,
        SilentlySetValue,
        app::DataTable* this_ptr,
        app::DataRow* dr,
        app::DataColumn* dc,
        app::DataRowVersion__Enum version,
        app::Object* new_value
    )
    IL2CPP_REGISTER_METHOD(0x018081C0, void, RemoveRow, app::DataTable* this_ptr, app::DataRow* row, bool check)
    IL2CPP_REGISTER_METHOD(0x01808670, void, Reset, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01808900, void, ResetIndexes, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01808910, void, ResetInternalIndexes, app::DataTable* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x01808B40, void, RollbackRow, app::DataTable* this_ptr, app::DataRow* row)
    IL2CPP_REGISTER_METHOD(
        0x01808BA0,
        app::DataRowChangeEventArgs*,
        RaiseRowChanged,
        app::DataTable* this_ptr,
        app::DataRowChangeEventArgs* args,
        app::DataRow* e_row,
        app::DataRowAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(
        0x01808E60,
        app::DataRowChangeEventArgs*,
        RaiseRowChanging_1,
        app::DataTable* this_ptr,
        app::DataRowChangeEventArgs* args,
        app::DataRow* e_row,
        app::DataRowAction__Enum e_action
    )
    IL2CPP_REGISTER_METHOD(
        0x01809190,
        app::DataRowChangeEventArgs*,
        RaiseRowChanging_2,
        app::DataTable* this_ptr,
        app::DataRowChangeEventArgs* args,
        app::DataRow* e_row,
        app::DataRowAction__Enum e_action,
        bool fire_event
    )
    IL2CPP_REGISTER_METHOD(
        0x01809350,
        void,
        SetNewRecord,
        app::DataTable* this_ptr,
        app::DataRow* row,
        int32_t proposed_record,
        app::DataRowAction__Enum action,
        bool is_in_merge,
        bool fire_event,
        bool suppress_ensure_property_changed
    )
    IL2CPP_REGISTER_METHOD(
        0x01809460,
        void,
        SetNewRecordWorker,
        app::DataTable* this_ptr,
        app::DataRow* row,
        int32_t proposed_record,
        app::DataRowAction__Enum action,
        bool is_in_merge,
        bool suppress_ensure_property_changed,
        int32_t position,
        bool fire_event,
        app::Exception** deferred_exception
    )
    IL2CPP_REGISTER_METHOD(0x01809E30, void, SetOldRecord, app::DataTable* this_ptr, app::DataRow* row, int32_t proposed_record)
    IL2CPP_REGISTER_METHOD(0x0180A1F0, void, RestoreShadowIndexes, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0180A210, void, SetShadowIndexes, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0180A250, void, ShadowIndexCopy, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0180A3B0, app::String*, ToString, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0180A4F0, bool, UpdatingCurrent, app::DataTable* this_ptr, app::DataRow* row, app::DataRowAction__Enum action)
    IL2CPP_REGISTER_METHOD(0x0180A520, app::DataColumn*, AddUniqueKey_1, app::DataTable* this_ptr, int32_t position)
    IL2CPP_REGISTER_METHOD(0x0180A8B0, app::DataColumn*, AddUniqueKey_2, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0180A8C0, app::DataColumn*, AddForeignKey, app::DataTable* this_ptr, app::DataColumn* parent_key)
    IL2CPP_REGISTER_METHOD(0x0180AA70, void, UpdatePropertyDescriptorCollectionCache, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0180AA80,
        app::PropertyDescriptorCollection*,
        GetPropertyDescriptorCollection,
        app::DataTable* this_ptr,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(0x0180B140, app::XmlQualifiedName*, get_TypeName, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D77860, void, set_TypeName, app::DataTable* this_ptr, app::XmlQualifiedName* value)
    IL2CPP_REGISTER_METHOD(0x0180B250, void, Merge_1, app::DataTable* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(
        0x0180B270,
        void,
        Merge_2,
        app::DataTable* this_ptr,
        app::DataTable* table,
        bool preserve_changes,
        app::MissingSchemaAction__Enum missing_schema_action
    )
    IL2CPP_REGISTER_METHOD(0x0180B5B0, void, WriteXml, app::DataTable* this_ptr, app::XmlWriter* writer, app::XmlWriteMode__Enum mode, bool write_hierarchy)
    IL2CPP_REGISTER_METHOD(0x0180BC50, bool, CheckForClosureOnExpressions, app::DataTable* this_ptr, app::DataTable* dt, bool write_hierarchy)
    IL2CPP_REGISTER_METHOD(0x0180BDF0, bool, CheckForClosureOnExpressionTables, app::DataTable* this_ptr, app::List_1_System_Data_DataTable_* table_list)
    IL2CPP_REGISTER_METHOD(0x0180C170, void, WriteXmlSchema, app::DataTable* this_ptr, app::XmlWriter* writer, bool write_hierarchy)
    IL2CPP_REGISTER_METHOD(0x0180C630, void, RestoreConstraint, app::DataTable* this_ptr, bool original_enforce_constraint)
    IL2CPP_REGISTER_METHOD(0x0180C690, bool, IsEmptyXml, app::DataTable* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(
        0x0180C960,
        app::XmlReadMode__Enum,
        ReadXml,
        app::DataTable* this_ptr,
        app::XmlReader* reader,
        app::XmlReadMode__Enum mode,
        bool deny_resolving
    )
    IL2CPP_REGISTER_METHOD(0x017EA790, void, ReadEndElement, app::DataTable* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x0180DDE0, void, ReadXDRSchema, app::DataTable* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x017EA650, bool, MoveToElement, app::DataTable* this_ptr, app::XmlReader* reader, int32_t depth)
    IL2CPP_REGISTER_METHOD(0x0180DF50, void, ReadXmlDiffgram, app::DataTable* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x0180EBB0, void, ReadXSDSchema, app::DataTable* this_ptr, app::XmlReader* reader, bool deny_resolving)
    IL2CPP_REGISTER_METHOD(0x0180EF00, void, ReadXmlSchema, app::DataTable* this_ptr, app::XmlReader* reader, bool deny_resolving)
    IL2CPP_REGISTER_METHOD(
        0x01810130,
        void,
        CreateTableList,
        app::DataTable* this_ptr,
        app::DataTable* current_table,
        app::List_1_System_Data_DataTable_* table_list
    )
    IL2CPP_REGISTER_METHOD(
        0x01810410,
        void,
        CreateRelationList,
        app::DataTable* this_ptr,
        app::List_1_System_Data_DataTable_* table_list,
        app::List_1_System_Data_DataRelation_* relation_list
    )
    IL2CPP_REGISTER_METHOD(0x01810720, app::XmlSchemaComplexType*, GetDataTableSchema, app::XmlSchemaSet* schema_set)
    IL2CPP_REGISTER_METHOD(0x01810C60, app::XmlSchema*, IXmlSerializable_GetSchema, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01810C80, app::XmlSchema*, GetSchema, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01811100, void, IXmlSerializable_ReadXml, app::DataTable* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x01811210, void, IXmlSerializable_WriteXml, app::DataTable* this_ptr, app::XmlWriter* writer)
    IL2CPP_REGISTER_METHOD(0x01811260, void, ReadXmlSerializable, app::DataTable* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x01811280, app::Hashtable*, get_RowDiffId, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018113F0, int32_t, get_ObjectID, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01811400, void, AddDependentColumn, app::DataTable* this_ptr, app::DataColumn* expression_column)
    IL2CPP_REGISTER_METHOD(0x018115B0, void, RemoveDependentColumn, app::DataTable* this_ptr, app::DataColumn* expression_column)
    IL2CPP_REGISTER_METHOD(0x01811670, void, EvaluateExpressions_1, app::DataTable* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01811940,
        void,
        EvaluateExpressions_2,
        app::DataTable* this_ptr,
        app::DataRow* row,
        app::DataRowAction__Enum action,
        app::List_1_System_Data_DataRow_* cached_rows
    )
    IL2CPP_REGISTER_METHOD(0x01811EF0, void, EvaluateExpressions_3, app::DataTable* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(0x018121C0, void, EvaluateDependentExpressions_1, app::DataTable* this_ptr, app::DataColumn* column)
    IL2CPP_REGISTER_METHOD(
        0x01812330,
        void,
        EvaluateDependentExpressions_2,
        app::DataTable* this_ptr,
        app::List_1_System_Data_DataColumn_* columns,
        app::DataRow* row,
        app::DataRowVersion__Enum version,
        app::List_1_System_Data_DataRow_* cached_rows
    )
} // namespace app::classes::System::Data::DataTable

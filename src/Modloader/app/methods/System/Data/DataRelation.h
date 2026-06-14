#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataColumn__Array.h>
#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#include <Modloader/app/structs/DataRow__Array.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ForeignKeyConstraint.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyChangedEventArgs.h>
#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UniqueConstraint.h>

namespace app::classes::System::Data::DataRelation {
    IL2CPP_REGISTER_METHOD(
        0x023A1700,
        void,
        ctor_1,
        app::DataRelation* this_ptr,
        app::String* relation_name,
        app::DataColumn* parent_column,
        app::DataColumn* child_column
    )
    IL2CPP_REGISTER_METHOD(
        0x023A1720,
        void,
        ctor_2,
        app::DataRelation* this_ptr,
        app::String* relation_name,
        app::DataColumn* parent_column,
        app::DataColumn* child_column,
        bool create_constraints
    )
    IL2CPP_REGISTER_METHOD(
        0x023A19A0,
        void,
        ctor_3,
        app::DataRelation* this_ptr,
        app::String* relation_name,
        app::DataColumn__Array* parent_columns,
        app::DataColumn__Array* child_columns
    )
    IL2CPP_REGISTER_METHOD(
        0x023A19C0,
        void,
        ctor_4,
        app::DataRelation* this_ptr,
        app::String* relation_name,
        app::DataColumn__Array* parent_columns,
        app::DataColumn__Array* child_columns,
        bool create_constraints
    )
    IL2CPP_REGISTER_METHOD(
        0x023A1AC0,
        void,
        ctor_5,
        app::DataRelation* this_ptr,
        app::String* relation_name,
        app::String* parent_table_name,
        app::String* child_table_name,
        app::String__Array* parent_column_names,
        app::String__Array* child_column_names,
        bool nested
    )
    IL2CPP_REGISTER_METHOD(
        0x023A1BC0,
        void,
        ctor_6,
        app::DataRelation* this_ptr,
        app::String* relation_name,
        app::String* parent_table_name,
        app::String* parent_table_namespace,
        app::String* child_table_name,
        app::String* child_table_namespace,
        app::String__Array* parent_column_names,
        app::String__Array* child_column_names,
        bool nested
    )
    IL2CPP_REGISTER_METHOD(0x023A1CD0, app::DataColumn__Array*, get_ChildColumns, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A1CF0, app::DataColumn__Array*, get_ChildColumnsReference, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A1CF0, app::DataKey, get_ChildKey, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A1D10, app::DataTable*, get_ChildTable, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A1D60, app::DataSet*, get_DataSet, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A1D80, app::String__Array*, get_ParentColumnNames, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A1D90, app::String__Array*, get_ChildColumnNames, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A1DA0, bool, IsKeyNull, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(
        0x023A1EA0,
        app::DataRow__Array*,
        GetChildRows,
        app::DataKey parent_key,
        app::DataKey child_key,
        app::DataRow* parent_row,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(
        0x023A1FE0,
        app::DataRow__Array*,
        GetParentRows,
        app::DataKey parent_key,
        app::DataKey child_key,
        app::DataRow* child_row,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(
        0x023A2120,
        app::DataRow*,
        GetParentRow,
        app::DataKey parent_key,
        app::DataKey child_key,
        app::DataRow* child_row,
        app::DataRowVersion__Enum version
    )
    IL2CPP_REGISTER_METHOD(0x01F4BE00, void, SetDataSet, app::DataRelation* this_ptr, app::DataSet* data_set)
    IL2CPP_REGISTER_METHOD(0x023A23B0, app::DataColumn__Array*, get_ParentColumns, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::DataColumn__Array*, get_ParentColumnsReference, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A23D0, app::DataKey, get_ParentKey, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A23F0, app::DataTable*, get_ParentTable, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A2440, app::String*, get_RelationName, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A2460, void, CheckNamespaceValidityForNestedRelations, app::DataRelation* this_ptr, app::String* ns)
    IL2CPP_REGISTER_METHOD(0x023A2730, void, CheckNestedRelations, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A2BF0, bool, get_Nested, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A2C10, void, set_Nested, app::DataRelation* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x023A39D0, app::UniqueConstraint*, get_ParentKeyConstraint, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetParentKeyConstraint, app::DataRelation* this_ptr, app::UniqueConstraint* value)
    IL2CPP_REGISTER_METHOD(0x023A39F0, app::ForeignKeyConstraint*, get_ChildKeyConstraint, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A3A10, app::PropertyCollection*, get_ExtendedProperties, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8A120, bool, get_CheckMultipleNested, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B8A130, void, set_CheckMultipleNested, app::DataRelation* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetChildKeyConstraint, app::DataRelation* this_ptr, app::ForeignKeyConstraint* value)
    IL2CPP_REGISTER_METHOD(0x023A3B80, void, CheckState, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A3F70, void, CheckStateForProperty, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x023A40B0,
        void,
        Create,
        app::DataRelation* this_ptr,
        app::String* relation_name,
        app::DataColumn__Array* parent_columns,
        app::DataColumn__Array* child_columns,
        bool create_constraints
    )
    IL2CPP_REGISTER_METHOD(0x023A43E0, app::DataRelation*, Clone, app::DataRelation* this_ptr, app::DataSet* destination)
    IL2CPP_REGISTER_METHOD(0x023A4BD0, void, OnPropertyChanging, app::DataRelation* this_ptr, app::PropertyChangedEventArgs* pcevent)
    IL2CPP_REGISTER_METHOD(0x023A4CD0, void, RaisePropertyChanging, app::DataRelation* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01EEAF40, app::String*, ToString, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A4EF0, void, ValidateMultipleNestedRelations, app::DataRelation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A5290, bool, IsAutoGenerated, app::DataRelation* this_ptr, app::DataColumn* col)
    IL2CPP_REGISTER_METHOD(0x006DC050, int32_t, get_ObjectID, app::DataRelation* this_ptr)
} // namespace app::classes::System::Data::DataRelation

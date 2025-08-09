#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataColumn.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlToDatasetMap.h>
#include <Modloader/app/structs/XmlToDatasetMap_TableSchemaInfo.h>
#include <Modloader/app/structs/XmlToDatasetMap_XmlNodeIdHashtable.h>

namespace app::classes::System::Data::XmlToDatasetMap {
    IL2CPP_REGISTER_METHOD(0x023F2B30, void, ctor_1, app::XmlToDatasetMap* this_ptr, app::DataSet* data_set, app::XmlNameTable* name_table)
    IL2CPP_REGISTER_METHOD(0x023F2B40, void, ctor_2, app::XmlToDatasetMap* this_ptr, app::XmlNameTable* name_table, app::DataSet* data_set)
    IL2CPP_REGISTER_METHOD(0x023F2B50, void, ctor_3, app::XmlToDatasetMap* this_ptr, app::DataTable* data_table, app::XmlNameTable* name_table)
    IL2CPP_REGISTER_METHOD(0x023F2B60, void, ctor_4, app::XmlToDatasetMap* this_ptr, app::XmlNameTable* name_table, app::DataTable* data_table)
    IL2CPP_REGISTER_METHOD(0x023F2B70, bool, IsMappedColumn, app::DataColumn* c)
    IL2CPP_REGISTER_METHOD(
        0x023F2BA0,
        app::XmlToDatasetMap_TableSchemaInfo*,
        AddTableSchema_1,
        app::XmlToDatasetMap* this_ptr,
        app::DataTable* table,
        app::XmlNameTable* name_table
    )
    IL2CPP_REGISTER_METHOD(
        0x023F2E60,
        app::XmlToDatasetMap_TableSchemaInfo*,
        AddTableSchema_2,
        app::XmlToDatasetMap* this_ptr,
        app::XmlNameTable* name_table,
        app::DataTable* table
    )
    IL2CPP_REGISTER_METHOD(
        0x023F3180,
        bool,
        AddColumnSchema_1,
        app::XmlToDatasetMap* this_ptr,
        app::DataColumn* col,
        app::XmlNameTable* name_table,
        app::XmlToDatasetMap_XmlNodeIdHashtable* columns
    )
    IL2CPP_REGISTER_METHOD(
        0x023F3470,
        bool,
        AddColumnSchema_2,
        app::XmlToDatasetMap* this_ptr,
        app::XmlNameTable* name_table,
        app::DataColumn* col,
        app::XmlToDatasetMap_XmlNodeIdHashtable* columns
    )
    IL2CPP_REGISTER_METHOD(0x023F37F0, void, BuildIdentityMap_1, app::XmlToDatasetMap* this_ptr, app::DataSet* data_set, app::XmlNameTable* name_table)
    IL2CPP_REGISTER_METHOD(0x023F3CC0, void, BuildIdentityMap_2, app::XmlToDatasetMap* this_ptr, app::XmlNameTable* name_table, app::DataSet* data_set)
    IL2CPP_REGISTER_METHOD(0x023F45B0, void, BuildIdentityMap_3, app::XmlToDatasetMap* this_ptr, app::DataTable* data_table, app::XmlNameTable* name_table)
    IL2CPP_REGISTER_METHOD(0x023F4950, void, BuildIdentityMap_4, app::XmlToDatasetMap* this_ptr, app::XmlNameTable* name_table, app::DataTable* data_table)
    IL2CPP_REGISTER_METHOD(0x023F51E0, app::ArrayList*, GetSelfAndDescendants, app::XmlToDatasetMap* this_ptr, app::DataTable* dt)
    IL2CPP_REGISTER_METHOD(0x023F5600, app::Object*, GetColumnSchema_1, app::XmlToDatasetMap* this_ptr, app::XmlNode* node, bool f_ignore_namespace)
    IL2CPP_REGISTER_METHOD(
        0x023F58A0,
        app::Object*,
        GetColumnSchema_2,
        app::XmlToDatasetMap* this_ptr,
        app::DataTable* table,
        app::XmlReader* data_reader,
        bool f_ignore_namespace
    )
    IL2CPP_REGISTER_METHOD(0x023F5AC0, app::Object*, GetSchemaForNode, app::XmlToDatasetMap* this_ptr, app::XmlNode* node, bool f_ignore_namespace)
    IL2CPP_REGISTER_METHOD(0x023F5C10, app::DataTable*, GetTableForNode, app::XmlToDatasetMap* this_ptr, app::XmlReader* node, bool f_ignore_namespace)
    IL2CPP_REGISTER_METHOD(
        0x023F5D30,
        void,
        HandleSpecialColumn,
        app::XmlToDatasetMap* this_ptr,
        app::DataColumn* col,
        app::XmlNameTable* name_table,
        app::XmlToDatasetMap_XmlNodeIdHashtable* columns
    )
} // namespace app::classes::System::Data::XmlToDatasetMap

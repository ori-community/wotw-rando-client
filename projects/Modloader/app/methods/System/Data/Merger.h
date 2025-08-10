#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataKey.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Merger.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>
#include <Modloader/app/structs/PropertyCollection.h>

namespace app::classes::System::Data::Merger {
    IL2CPP_REGISTER_METHOD(
        0x01E40FC0,
        void,
        ctor_1,
        app::Merger* this_ptr,
        app::DataSet* data_set,
        bool preserve_changes,
        app::MissingSchemaAction__Enum missing_schema_action
    )
    IL2CPP_REGISTER_METHOD(
        0x01E40FE0,
        void,
        ctor_2,
        app::Merger* this_ptr,
        app::DataTable* data_table,
        bool preserve_changes,
        app::MissingSchemaAction__Enum missing_schema_action
    )
    IL2CPP_REGISTER_METHOD(0x01E41000, void, MergeDataSet, app::Merger* this_ptr, app::DataSet* source)
    IL2CPP_REGISTER_METHOD(0x01E41D60, void, MergeTable_1, app::Merger* this_ptr, app::DataTable* src)
    IL2CPP_REGISTER_METHOD(0x01E420B0, void, MergeTable_2, app::Merger* this_ptr, app::DataTable* src, app::DataTable* dst)
    IL2CPP_REGISTER_METHOD(0x01E425E0, app::DataTable*, MergeSchema, app::Merger* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01E43010, void, MergeTableData, app::Merger* this_ptr, app::DataTable* src)
    IL2CPP_REGISTER_METHOD(0x01E430D0, void, MergeConstraints_1, app::Merger* this_ptr, app::DataSet* source)
    IL2CPP_REGISTER_METHOD(0x01E43160, void, MergeConstraints_2, app::Merger* this_ptr, app::DataTable* table)
    IL2CPP_REGISTER_METHOD(0x01E43510, void, MergeRelation, app::Merger* this_ptr, app::DataRelation* relation)
    IL2CPP_REGISTER_METHOD(0x01E440B0, void, MergeExtendedProperties, app::Merger* this_ptr, app::PropertyCollection* src, app::PropertyCollection* dst)
    IL2CPP_REGISTER_METHOD(0x01E442B0, app::DataKey, GetSrcKey, app::Merger* this_ptr, app::DataTable* src, app::DataTable* dst)
} // namespace app::classes::System::Data::Merger

#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DataRelationCollection_DataTableRelationCollection.h>
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/CollectionChangeEventHandler.h>

namespace app::classes::System::Data::DataRelationCollection_DataTableRelationCollection {
    IL2CPP_REGISTER_METHOD(0x023A8560, void, ctor, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::DataTable* table, bool f_parent_collection))
    IL2CPP_REGISTER_METHODINFO(0x0474B298, DataRelationCollection_DataTableRelationCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::ArrayList*, get_List, (app::DataRelationCollection_DataTableRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A86F0, void, EnsureDataSet, (app::DataRelationCollection_DataTableRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747640, DataRelationCollection_DataTableRelationCollection_EnsureDataSet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A8790, app::DataSet*, GetDataSet, (app::DataRelationCollection_DataTableRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A8840, app::DataRelation*, get_Item_1, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04759398, DataRelationCollection_DataTableRelationCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A8950, app::DataRelation*, get_Item_2, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04727E00, DataRelationCollection_DataTableRelationCollection_get_Item_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A8A60, void, add_RelationPropertyChanged, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::CollectionChangeEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x023A8B50, void, remove_RelationPropertyChanged, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::CollectionChangeEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x023A8C40, void, AddCache, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHOD(0x023A8C90, void, AddCore, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHODINFO(0x04725D48, DataRelationCollection_DataTableRelationCollection_AddCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A8E20, void, RemoveCache, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHODINFO(0x04720168, DataRelationCollection_DataTableRelationCollection_RemoveCache__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A8F80, void, RemoveCore, (app::DataRelationCollection_DataTableRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHODINFO(0x04701920, DataRelationCollection_DataTableRelationCollection_RemoveCore__MethodInfo)
} // namespace app::classes::System::Data::DataRelationCollection_DataTableRelationCollection

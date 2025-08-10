#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/DataRelationCollection_DataSetRelationCollection.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::DataRelationCollection_DataSetRelationCollection {
    IL2CPP_REGISTER_METHOD(0x023A7010, void, ctor, app::DataRelationCollection_DataSetRelationCollection* this_ptr, app::DataSet* data_set)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::ArrayList*, get_List, app::DataRelationCollection_DataSetRelationCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A7190, void, Clear, app::DataRelationCollection_DataSetRelationCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DataSet*, GetDataSet, app::DataRelationCollection_DataSetRelationCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023A71D0, app::DataRelation*, get_Item_1, app::DataRelationCollection_DataSetRelationCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x023A72E0, app::DataRelation*, get_Item_2, app::DataRelationCollection_DataSetRelationCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023A73F0, void, AddCore, app::DataRelationCollection_DataSetRelationCollection* this_ptr, app::DataRelation* relation)
    IL2CPP_REGISTER_METHOD(0x023A7BA0, void, RemoveCore, app::DataRelationCollection_DataSetRelationCollection* this_ptr, app::DataRelation* relation)
    IL2CPP_REGISTER_METHOD(0x023A7F60, void, FinishInitRelations, app::DataRelationCollection_DataSetRelationCollection* this_ptr)
} // namespace app::classes::System::Data::DataRelationCollection_DataSetRelationCollection

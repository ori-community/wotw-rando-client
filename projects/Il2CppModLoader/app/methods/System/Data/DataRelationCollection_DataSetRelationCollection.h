#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::DataRelationCollection_DataSetRelationCollection {
    IL2CPP_REGISTER_METHOD(0x023A7010, void, ctor, (app::DataRelationCollection_DataSetRelationCollection * this_ptr, app::DataSet* data_set))
    IL2CPP_REGISTER_METHODINFO(0x04734D60, DataRelationCollection_DataSetRelationCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::ArrayList*, get_List, (app::DataRelationCollection_DataSetRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A7190, void, Clear, (app::DataRelationCollection_DataSetRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::DataSet*, GetDataSet, (app::DataRelationCollection_DataSetRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A71D0, app::DataRelation*, get_Item_1, (app::DataRelationCollection_DataSetRelationCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04792428, DataRelationCollection_DataSetRelationCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A72E0, app::DataRelation*, get_Item_2, (app::DataRelationCollection_DataSetRelationCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x0476F790, DataRelationCollection_DataSetRelationCollection_get_Item_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A73F0, void, AddCore, (app::DataRelationCollection_DataSetRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHODINFO(0x0474D170, DataRelationCollection_DataSetRelationCollection_AddCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A7BA0, void, RemoveCore, (app::DataRelationCollection_DataSetRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHODINFO(0x04785C30, DataRelationCollection_DataSetRelationCollection_RemoveCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A7F60, void, FinishInitRelations, (app::DataRelationCollection_DataSetRelationCollection * this_ptr))
} // namespace app::classes::System::Data::DataRelationCollection_DataSetRelationCollection

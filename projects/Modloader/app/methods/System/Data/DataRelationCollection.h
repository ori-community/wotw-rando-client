#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::DataRelationCollection {
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ObjectID, (app::DataRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A5510, void, Add, (app::DataRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHOD(0x023A5910, void, AddCore, (app::DataRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHODINFO(0x0478B9F0, DataRelationCollection_AddCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A5C30, void, add_CollectionChanged, (app::DataRelationCollection * this_ptr, app::CollectionChangeEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x023A5D40, void, remove_CollectionChanged, (app::DataRelationCollection * this_ptr, app::CollectionChangeEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x023A5E50, app::String*, AssignName, (app::DataRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A5E70, void, Clear, (app::DataRelationCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023A60E0, bool, Contains, (app::DataRelationCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x023A6100, int32_t, InternalIndexOf, (app::DataRelationCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x023A62E0, app::String*, MakeName, (app::DataRelationCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x023A63B0, void, OnCollectionChanged, (app::DataRelationCollection * this_ptr, app::CollectionChangeEventArgs* ccevent))
    IL2CPP_REGISTER_METHOD(0x023A64A0, void, OnCollectionChanging, (app::DataRelationCollection * this_ptr, app::CollectionChangeEventArgs* ccevent))
    IL2CPP_REGISTER_METHOD(0x023A6590, void, RegisterName, (app::DataRelationCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04716000, DataRelationCollection_RegisterName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A6790, void, Remove, (app::DataRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHOD(0x023A6AF0, void, RemoveAt, (app::DataRelationCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04738878, DataRelationCollection_RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A6BD0, void, RemoveCore, (app::DataRelationCollection * this_ptr, app::DataRelation* relation))
    IL2CPP_REGISTER_METHODINFO(0x04711DE0, DataRelationCollection_RemoveCore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x023A6DE0, void, UnregisterName, (app::DataRelationCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x023A6F50, void, ctor, (app::DataRelationCollection * this_ptr))
} // namespace app::classes::System::Data::DataRelationCollection

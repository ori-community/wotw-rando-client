#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_1, (app::NameObjectCollectionBase_KeysCollection * this_ptr, app::NameObjectCollectionBase* coll))
    IL2CPP_REGISTER_METHOD(0x02498E10, app::IEnumerator*, GetEnumerator, (app::NameObjectCollectionBase_KeysCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717150, int32_t, get_Count, (app::NameObjectCollectionBase_KeysCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02498F70, void, ICollection_CopyTo, (app::NameObjectCollectionBase_KeysCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04759C78, NameObjectCollectionBase_KeysCollection_System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024993A0, app::Object*, ICollection_get_SyncRoot, (app::NameObjectCollectionBase_KeysCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::NameObjectCollectionBase_KeysCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02499430, void, ctor_2, (app::NameObjectCollectionBase_KeysCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04767850, NameObjectCollectionBase_KeysCollection__ctor_1__MethodInfo)
} // namespace app::classes::System::Collections::Specialized::NameObjectCollectionBase_KeysCollection

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::ObjectModel::KeyedCollection_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02CFBD00, app::Object *, get_Item, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::IDictionary_2_System_Object_System_Object_ *, get_Dictionary, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor_1, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor_2, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer))
    IL2CPP_REGISTER_METHOD(0x02CFBC60, void, ctor_3, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, app::IEqualityComparer_1_System_Object_ * comparer, int32_t dictionary_creation_threshold))
    IL2CPP_REGISTER_METHOD(0x02CFBFD0, bool, Contains, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x02CFC290, void, ClearItems, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFC2F0, void, InsertItem, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, int32_t index, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02CFC390, void, RemoveItem, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02CFC490, void, SetItem, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, int32_t index, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02CFC660, void, AddKey, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, app::Object * key, app::Object * item))
    IL2CPP_REGISTER_METHOD(0x02CFC720, void, CreateDictionary, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CFCA90, void, RemoveKey, (app::KeyedCollection_2_System_Object_System_Object_ * this_ptr, app::Object * key))
}

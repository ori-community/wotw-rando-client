#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::InternalDataCollectionBase {
    IL2CPP_REGISTER_METHOD(0x01E3FA80, int32_t, get_Count, (app::InternalDataCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3FAC0, void, CopyTo, (app::InternalDataCollectionBase * this_ptr, app::Array* ar, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01E3FB10, app::IEnumerator*, GetEnumerator, (app::InternalDataCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::InternalDataCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3FB50, int32_t, NamesEqual, (app::InternalDataCollectionBase * this_ptr, app::String* s1, app::String* s2, bool f_case_sensitive, app::CultureInfo* locale))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, (app::InternalDataCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ArrayList*, get_List, (app::InternalDataCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InternalDataCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E3FC50, void, cctor, ())
} // namespace app::classes::System::Data::InternalDataCollectionBase

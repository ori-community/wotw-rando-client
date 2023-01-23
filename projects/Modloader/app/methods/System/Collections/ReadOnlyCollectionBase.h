#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ReadOnlyCollectionBase.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Collections::ReadOnlyCollectionBase {
    IL2CPP_REGISTER_METHOD(0x0202C980, app::ArrayList*, get_InnerList, (app::ReadOnlyCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202CAE0, int32_t, get_Count, (app::ReadOnlyCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202CB10, bool, ICollection_get_IsSynchronized, (app::ReadOnlyCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202CB40, app::Object*, ICollection_get_SyncRoot, (app::ReadOnlyCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202CB70, void, ICollection_CopyTo, (app::ReadOnlyCollectionBase * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0202CBC0, app::IEnumerator*, GetEnumerator, (app::ReadOnlyCollectionBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReadOnlyCollectionBase * this_ptr))
} // namespace app::classes::System::Collections::ReadOnlyCollectionBase

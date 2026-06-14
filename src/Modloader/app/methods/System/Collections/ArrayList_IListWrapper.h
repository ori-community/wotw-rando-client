#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ArrayList_IListWrapper.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::ArrayList_IListWrapper {
    IL2CPP_REGISTER_METHOD(0x0201AA60, void, ctor, app::ArrayList_IListWrapper* this_ptr, app::IList* list)
    IL2CPP_REGISTER_METHOD(0x0201AB20, void, set_Capacity, app::ArrayList_IListWrapper* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0201AC00, int32_t, get_Count, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201AC90, bool, get_IsReadOnly, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201AD20, bool, get_IsFixedSize, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201ADB0, bool, get_IsSynchronized, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201AE40, app::Object*, get_Item, app::ArrayList_IListWrapper* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0201AEE0, void, set_Item, app::ArrayList_IListWrapper* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0201AFA0, app::Object*, get_SyncRoot, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201B030, int32_t, Add, app::ArrayList_IListWrapper* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0201B0E0, void, AddRange, app::ArrayList_IListWrapper* this_ptr, app::ICollection* c)
    IL2CPP_REGISTER_METHOD(0x0201B130, void, Clear, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201B230, app::Object*, Clone, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201B380, bool, Contains, app::ArrayList_IListWrapper* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0201B430, void, CopyTo_1, app::ArrayList_IListWrapper* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x0201B4E0,
        void,
        CopyTo_2,
        app::ArrayList_IListWrapper* this_ptr,
        int32_t index,
        app::Array* array,
        int32_t array_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x0201B7C0, app::IEnumerator*, GetEnumerator, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201B850, int32_t, IndexOf, app::ArrayList_IListWrapper* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0201B900, void, Insert, app::ArrayList_IListWrapper* this_ptr, int32_t index, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0201B9C0, void, InsertRange, app::ArrayList_IListWrapper* this_ptr, int32_t index, app::ICollection* c)
    IL2CPP_REGISTER_METHOD(0x0201BCE0, void, Remove, app::ArrayList_IListWrapper* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0201BD20, void, RemoveAt, app::ArrayList_IListWrapper* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0201BDD0, void, RemoveRange, app::ArrayList_IListWrapper* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0201BFD0, void, Sort, app::ArrayList_IListWrapper* this_ptr, int32_t index, int32_t count, app::IComparer* comparer)
    IL2CPP_REGISTER_METHOD(0x0201C280, app::Object__Array*, ToArray_1, app::ArrayList_IListWrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0201C350, app::Array*, ToArray_2, app::ArrayList_IListWrapper* this_ptr, app::Type* type)
} // namespace app::classes::System::Collections::ArrayList_IListWrapper

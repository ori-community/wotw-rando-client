#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArrayList_ReadOnlyList.h>
#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::System::Collections::ArrayList_ReadOnlyList {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::ArrayList_ReadOnlyList * this_ptr, app::IList* l))
    IL2CPP_REGISTER_METHOD(0x0201CE10, int32_t, get_Count, (app::ArrayList_ReadOnlyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::ArrayList_ReadOnlyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFixedSize, (app::ArrayList_ReadOnlyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201CEA0, bool, get_IsSynchronized, (app::ArrayList_ReadOnlyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201CF30, app::Object*, get_Item, (app::ArrayList_ReadOnlyList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0201CFD0, void, set_Item, (app::ArrayList_ReadOnlyList * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047992B8, ArrayList_ReadOnlyList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201D040, app::Object*, get_SyncRoot, (app::ArrayList_ReadOnlyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201D0D0, int32_t, Add, (app::ArrayList_ReadOnlyList * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x047915B8, ArrayList_ReadOnlyList_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201D140, void, Clear, (app::ArrayList_ReadOnlyList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774DF8, ArrayList_ReadOnlyList_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201D1B0, bool, Contains, (app::ArrayList_ReadOnlyList * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0201D260, void, CopyTo, (app::ArrayList_ReadOnlyList * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0201D310, app::IEnumerator*, GetEnumerator, (app::ArrayList_ReadOnlyList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0201D3A0, int32_t, IndexOf, (app::ArrayList_ReadOnlyList * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0201D450, void, Insert, (app::ArrayList_ReadOnlyList * this_ptr, int32_t index, app::Object* obj))
    IL2CPP_REGISTER_METHODINFO(0x0475AD08, ArrayList_ReadOnlyList_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201D4C0, void, Remove, (app::ArrayList_ReadOnlyList * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x0475E630, ArrayList_ReadOnlyList_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0201D530, void, RemoveAt, (app::ArrayList_ReadOnlyList * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478E4E0, ArrayList_ReadOnlyList_RemoveAt__MethodInfo)
} // namespace app::classes::System::Collections::ArrayList_ReadOnlyList

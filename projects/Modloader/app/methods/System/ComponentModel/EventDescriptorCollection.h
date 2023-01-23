#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventDescriptorCollection.h>
#include <Modloader/app/structs/EventDescriptor_1__Array.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/EventDescriptor_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::ComponentModel::EventDescriptorCollection {
    IL2CPP_REGISTER_METHOD(0x01FE9E20, void, ctor_1, (app::EventDescriptorCollection * this_ptr, app::EventDescriptor_1__Array* events))
    IL2CPP_REGISTER_METHOD(0x01FE9EE0, void, ctor_2, (app::EventDescriptorCollection * this_ptr, app::EventDescriptor_1__Array* events, bool read_only))
    IL2CPP_REGISTER_METHOD(0x01FE9F10, void, ctor_3, (app::EventDescriptorCollection * this_ptr, app::EventDescriptor_1__Array* events, int32_t event_count, app::String__Array* named_sort, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Count, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEA090, app::EventDescriptor_1*, get_Item_1, (app::EventDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0478CDA8, EventDescriptorCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FEA180, app::EventDescriptor_1*, get_Item_2, (app::EventDescriptorCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01FEA1A0, int32_t, Add, (app::EventDescriptorCollection * this_ptr, app::EventDescriptor_1* value))
    IL2CPP_REGISTER_METHODINFO(0x0476BF18, EventDescriptorCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FEA2D0, void, Clear, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047076F0, EventDescriptorCollection_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FEA380, bool, Contains, (app::EventDescriptorCollection * this_ptr, app::EventDescriptor_1* value))
    IL2CPP_REGISTER_METHOD(0x01FEA3A0, void, ICollection_CopyTo, (app::EventDescriptorCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01FEA3F0, void, EnsureEventsOwned, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEA4D0, void, EnsureSize, (app::EventDescriptorCollection * this_ptr, int32_t size_needed))
    IL2CPP_REGISTER_METHOD(0x01FEA620, app::EventDescriptor_1*, Find, (app::EventDescriptorCollection * this_ptr, app::String* name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x01FEA930, int32_t, IndexOf, (app::EventDescriptorCollection * this_ptr, app::EventDescriptor_1* value))
    IL2CPP_REGISTER_METHOD(0x01FEA9D0, void, Insert, (app::EventDescriptorCollection * this_ptr, int32_t index, app::EventDescriptor_1* value))
    IL2CPP_REGISTER_METHODINFO(0x04776C18, EventDescriptorCollection_Insert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FEAB20, void, Remove, (app::EventDescriptorCollection * this_ptr, app::EventDescriptor_1* value))
    IL2CPP_REGISTER_METHODINFO(0x04739450, EventDescriptorCollection_Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FEABF0, void, RemoveAt, (app::EventDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474B830, EventDescriptorCollection_RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FEAD10, app::IEnumerator*, GetEnumerator, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEAEA0, app::EventDescriptorCollection*, Sort_1, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEB020, app::EventDescriptorCollection*, Sort_2, (app::EventDescriptorCollection * this_ptr, app::String__Array* names))
    IL2CPP_REGISTER_METHOD(0x01FEB1A0, app::EventDescriptorCollection*, Sort_3, (app::EventDescriptorCollection * this_ptr, app::String__Array* names, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x01FEB320, app::EventDescriptorCollection*, Sort_4, (app::EventDescriptorCollection * this_ptr, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x01FEB4A0, void, InternalSort_1, (app::EventDescriptorCollection * this_ptr, app::String__Array* names))
    IL2CPP_REGISTER_METHOD(0x01FEB8F0, void, InternalSort_2, (app::EventDescriptorCollection * this_ptr, app::IComparer* sorter))
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, ICollection_get_Count, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, ICollection_get_SyncRoot, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEB9C0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01701410, app::Object*, IList_get_Item, (app::EventDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01FEB9D0, void, IList_set_Item, (app::EventDescriptorCollection * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04768C90, EventDescriptorCollection_System_Collections_IList_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FEBB40, int32_t, IList_Add, (app::EventDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FEA2D0, void, IList_Clear, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEBD20, bool, IList_Contains, (app::EventDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FEBE00, int32_t, IList_IndexOf, (app::EventDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FEBEE0, void, IList_Insert, (app::EventDescriptorCollection * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FEC0F0, void, IList_Remove, (app::EventDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FEC280, void, IList_RemoveAt, (app::EventDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, IList_get_IsReadOnly, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, IList_get_IsFixedSize, (app::EventDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEC290, void, cctor, ())
} // namespace app::classes::System::ComponentModel::EventDescriptorCollection

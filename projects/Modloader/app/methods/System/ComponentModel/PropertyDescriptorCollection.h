#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptor.h>
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>

namespace app::classes::System::ComponentModel::PropertyDescriptorCollection {
    IL2CPP_REGISTER_METHOD(0x029940A0, void, ctor_1, (app::PropertyDescriptorCollection * this_ptr, app::PropertyDescriptor__Array* properties))
    IL2CPP_REGISTER_METHOD(0x02994160, void, ctor_2, (app::PropertyDescriptorCollection * this_ptr, app::PropertyDescriptor__Array* properties, bool read_only))
    IL2CPP_REGISTER_METHOD(0x02994190, void, ctor_3, (app::PropertyDescriptorCollection * this_ptr, app::PropertyDescriptor__Array* properties, int32_t prop_count, app::String__Array* named_sort, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Count, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02994310, app::PropertyDescriptor*, get_Item_1, (app::PropertyDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02994400, app::PropertyDescriptor*, get_Item_2, (app::PropertyDescriptorCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02994420, int32_t, Add, (app::PropertyDescriptorCollection * this_ptr, app::PropertyDescriptor* value))
    IL2CPP_REGISTER_METHOD(0x02994550, void, Clear, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02994600, bool, Contains, (app::PropertyDescriptorCollection * this_ptr, app::PropertyDescriptor* value))
    IL2CPP_REGISTER_METHOD(0x02994620, void, CopyTo, (app::PropertyDescriptorCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02994670, void, EnsurePropsOwned, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02994750, void, EnsureSize, (app::PropertyDescriptorCollection * this_ptr, int32_t size_needed))
    IL2CPP_REGISTER_METHOD(0x029948A0, app::PropertyDescriptor*, Find, (app::PropertyDescriptorCollection * this_ptr, app::String* name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x02994E70, int32_t, IndexOf, (app::PropertyDescriptorCollection * this_ptr, app::PropertyDescriptor* value))
    IL2CPP_REGISTER_METHOD(0x02994F10, void, Insert, (app::PropertyDescriptorCollection * this_ptr, int32_t index, app::PropertyDescriptor* value))
    IL2CPP_REGISTER_METHOD(0x02995060, void, Remove, (app::PropertyDescriptorCollection * this_ptr, app::PropertyDescriptor* value))
    IL2CPP_REGISTER_METHOD(0x02995130, void, RemoveAt, (app::PropertyDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02995250, app::PropertyDescriptorCollection*, Sort_1, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029953D0, app::PropertyDescriptorCollection*, Sort_2, (app::PropertyDescriptorCollection * this_ptr, app::String__Array* names))
    IL2CPP_REGISTER_METHOD(0x02995550, app::PropertyDescriptorCollection*, Sort_3, (app::PropertyDescriptorCollection * this_ptr, app::String__Array* names, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x029956D0, app::PropertyDescriptorCollection*, Sort_4, (app::PropertyDescriptorCollection * this_ptr, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x02995850, void, InternalSort_1, (app::PropertyDescriptorCollection * this_ptr, app::String__Array* names))
    IL2CPP_REGISTER_METHOD(0x02995CA0, void, InternalSort_2, (app::PropertyDescriptorCollection * this_ptr, app::IComparer* sorter))
    IL2CPP_REGISTER_METHOD(0x02995D70, app::IEnumerator*, GetEnumerator, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, ICollection_get_Count, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Object*, ICollection_get_SyncRoot, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02995E70, void, IDictionary_Add, (app::PropertyDescriptorCollection * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02995F70, void, IDictionary_Clear, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02995F80, bool, IDictionary_Contains, (app::PropertyDescriptorCollection * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x02996070, app::IDictionaryEnumerator*, IDictionary_GetEnumerator, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, IDictionary_get_IsFixedSize, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, IDictionary_get_IsReadOnly, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029961C0, app::Object*, IDictionary_get_Item, (app::PropertyDescriptorCollection * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x029962A0, void, IDictionary_set_Item, (app::PropertyDescriptorCollection * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02996640, app::ICollection*, IDictionary_get_Keys, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029967A0, app::ICollection*, IDictionary_get_Values, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02996940, void, IDictionary_Remove, (app::PropertyDescriptorCollection * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x0195B1F0, app::IEnumerator*, IEnumerable_GetEnumerator, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02996A30, int32_t, IList_Add, (app::PropertyDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02995F70, void, IList_Clear, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02996B10, bool, IList_Contains, (app::PropertyDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02996BF0, int32_t, IList_IndexOf, (app::PropertyDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02996CD0, void, IList_Insert, (app::PropertyDescriptorCollection * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, IList_get_IsReadOnly, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F3ABA0, bool, IList_get_IsFixedSize, (app::PropertyDescriptorCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02996EE0, void, IList_Remove, (app::PropertyDescriptorCollection * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02997070, void, IList_RemoveAt, (app::PropertyDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02997080, app::Object*, IList_get_Item, (app::PropertyDescriptorCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x029970A0, void, IList_set_Item, (app::PropertyDescriptorCollection * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02997270, void, cctor, ())
} // namespace app::classes::System::ComponentModel::PropertyDescriptorCollection

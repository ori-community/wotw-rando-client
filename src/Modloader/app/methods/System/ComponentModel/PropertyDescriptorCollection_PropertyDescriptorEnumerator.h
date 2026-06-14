#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/PropertyDescriptorCollection_PropertyDescriptorEnumerator.h>

namespace app::classes::System::ComponentModel::PropertyDescriptorCollection_PropertyDescriptorEnumerator {
    IL2CPP_REGISTER_METHOD(
        0x01DC2A00,
        void,
        ctor,
        app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* this_ptr,
        app::PropertyDescriptorCollection* owner
    )
    IL2CPP_REGISTER_METHOD(0x029973D0, app::Object*, get_Current, app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029974B0, app::DictionaryEntry, get_Entry, app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02997520, app::Object*, get_Key, app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02997520, app::Object*, get_Value, app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02997570, bool, MoveNext, app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, app::PropertyDescriptorCollection_PropertyDescriptorEnumerator* this_ptr)
} // namespace app::classes::System::ComponentModel::PropertyDescriptorCollection_PropertyDescriptorEnumerator

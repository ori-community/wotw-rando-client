#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicMetaObject.h>
#include <Modloader/app/structs/ExpandoClass.h>
#include <Modloader/app/structs/ExpandoObject.h>
#include <Modloader/app/structs/ExpandoObject_ExpandoData.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ICollection_1_System_Object_.h>
#include <Modloader/app/structs/ICollection_1_System_String_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_String_System_Object___Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyChangedEventHandler.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Dynamic::ExpandoObject {
    IL2CPP_REGISTER_METHOD(0x01F8CA20, void, ctor, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F8CBA0,
        bool,
        TryGetValue,
        app::ExpandoObject* this_ptr,
        app::Object* index_class,
        int32_t index,
        app::String* name,
        bool ignore_case,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(
        0x01F8CD50,
        void,
        TrySetValue,
        app::ExpandoObject* this_ptr,
        app::Object* index_class,
        int32_t index,
        app::Object* value,
        app::String* name,
        bool ignore_case,
        bool add
    )
    IL2CPP_REGISTER_METHOD(
        0x01F8D240,
        bool,
        TryDeleteValue,
        app::ExpandoObject* this_ptr,
        app::Object* index_class,
        int32_t index,
        app::String* name,
        bool ignore_case,
        app::Object* delete_value
    )
    IL2CPP_REGISTER_METHOD(0x01F8D6D0, bool, IsDeletedMember, app::ExpandoObject* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0195B0F0, app::ExpandoClass*, get_Class, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F8D7F0,
        app::ExpandoObject_ExpandoData*,
        PromoteClassCore,
        app::ExpandoObject* this_ptr,
        app::ExpandoClass* old_class,
        app::ExpandoClass* new_class
    )
    IL2CPP_REGISTER_METHOD(0x01F8D840, void, PromoteClass, app::ExpandoObject* this_ptr, app::Object* old_class, app::Object* new_class)
    IL2CPP_REGISTER_METHOD(
        0x01F8DA60,
        app::DynamicMetaObject*,
        IDynamicMetaObjectProvider_GetMetaObject,
        app::ExpandoObject* this_ptr,
        app::Expression* parameter
    )
    IL2CPP_REGISTER_METHOD(0x01F8DC70, void, TryAddMember, app::ExpandoObject* this_ptr, app::String* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F8DD40, bool, TryGetValueForKey, app::ExpandoObject* this_ptr, app::String* key, app::Object** value)
    IL2CPP_REGISTER_METHOD(0x01F8DD70, bool, ExpandoContainsKey, app::ExpandoObject* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x01F8DDB0, app::ICollection_1_System_String_*, IDictionary_string__object__get_Keys, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F8DF00, app::ICollection_1_System_Object_*, IDictionary_string__object__get_Values, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F8E050, app::Object*, IDictionary_string__object__get_Item, app::ExpandoObject* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x01F8E130, void, IDictionary_string__object__set_Item, app::ExpandoObject* this_ptr, app::String* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F8E200, void, IDictionary_string__object__Add, app::ExpandoObject* this_ptr, app::String* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F8E210, bool, IDictionary_string__object__ContainsKey, app::ExpandoObject* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x01F8E350, bool, IDictionary_string__object__Remove, app::ExpandoObject* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x01F8DD40, bool, IDictionary_string__object__TryGetValue, app::ExpandoObject* this_ptr, app::String* key, app::Object** value)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, ICollection_KeyValuePair_string__object___get_Count, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_KeyValuePair_string__object___get_IsReadOnly, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F8E440,
        void,
        ICollection_KeyValuePair_string__object___Add,
        app::ExpandoObject* this_ptr,
        app::KeyValuePair_2_System_String_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(0x01F8E4D0, void, ICollection_KeyValuePair_string__object___Clear, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F8E880,
        bool,
        ICollection_KeyValuePair_string__object___Contains,
        app::ExpandoObject* this_ptr,
        app::KeyValuePair_2_System_String_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x01F8E990,
        void,
        ICollection_KeyValuePair_string__object___CopyTo,
        app::ExpandoObject* this_ptr,
        app::KeyValuePair_2_System_String_System_Object___Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x01F8ED60,
        bool,
        ICollection_KeyValuePair_string__object___Remove,
        app::ExpandoObject* this_ptr,
        app::KeyValuePair_2_System_String_System_Object_ item
    )
    IL2CPP_REGISTER_METHOD(
        0x01F8EE10,
        app::IEnumerator_1_KeyValuePair_2_System_String_System_Object_*,
        IEnumerable_KeyValuePair_string__object___GetEnumerator,
        app::ExpandoObject* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01F8EE10, app::IEnumerator*, IEnumerable_GetEnumerator, app::ExpandoObject* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F8EE40,
        app::IEnumerator_1_KeyValuePair_2_System_String_System_Object_*,
        GetExpandoEnumerator,
        app::ExpandoObject* this_ptr,
        app::ExpandoObject_ExpandoData* data,
        int32_t version
    )
    IL2CPP_REGISTER_METHOD(0x01F8EFB0, void, INotifyPropertyChanged_add_PropertyChanged, app::ExpandoObject* this_ptr, app::PropertyChangedEventHandler* value)
    IL2CPP_REGISTER_METHOD(
        0x01F8F070,
        void,
        INotifyPropertyChanged_remove_PropertyChanged,
        app::ExpandoObject* this_ptr,
        app::PropertyChangedEventHandler* value
    )
    IL2CPP_REGISTER_METHOD(0x01F8F130, void, cctor, )
} // namespace app::classes::System::Dynamic::ExpandoObject

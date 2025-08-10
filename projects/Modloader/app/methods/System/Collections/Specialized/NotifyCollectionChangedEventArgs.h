#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IList.h>
#include <Modloader/app/structs/NotifyCollectionChangedAction__Enum.h>
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::NotifyCollectionChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x0249AF80, void, ctor_1, app::NotifyCollectionChangedEventArgs* this_ptr, app::NotifyCollectionChangedAction__Enum action)
    IL2CPP_REGISTER_METHOD(
        0x0249B130,
        void,
        ctor_2,
        app::NotifyCollectionChangedEventArgs* this_ptr,
        app::NotifyCollectionChangedAction__Enum action,
        app::Object* changed_item,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x0249B3A0,
        void,
        ctor_3,
        app::NotifyCollectionChangedEventArgs* this_ptr,
        app::NotifyCollectionChangedAction__Enum action,
        app::Object* new_item,
        app::Object* old_item,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x0249B620,
        void,
        ctor_4,
        app::NotifyCollectionChangedEventArgs* this_ptr,
        app::NotifyCollectionChangedAction__Enum action,
        app::IList* new_items,
        app::IList* old_items,
        int32_t starting_index
    )
    IL2CPP_REGISTER_METHOD(
        0x0249B820,
        void,
        InitializeAddOrRemove,
        app::NotifyCollectionChangedEventArgs* this_ptr,
        app::NotifyCollectionChangedAction__Enum action,
        app::IList* changed_items,
        int32_t starting_index
    )
    IL2CPP_REGISTER_METHOD(
        0x0249B850,
        void,
        InitializeAdd,
        app::NotifyCollectionChangedEventArgs* this_ptr,
        app::NotifyCollectionChangedAction__Enum action,
        app::IList* new_items,
        int32_t new_starting_index
    )
    IL2CPP_REGISTER_METHOD(
        0x0249B930,
        void,
        InitializeRemove,
        app::NotifyCollectionChangedEventArgs* this_ptr,
        app::NotifyCollectionChangedAction__Enum action,
        app::IList* old_items,
        int32_t old_starting_index
    )
    IL2CPP_REGISTER_METHOD(
        0x0249BA10,
        void,
        InitializeMoveOrReplace,
        app::NotifyCollectionChangedEventArgs* this_ptr,
        app::NotifyCollectionChangedAction__Enum action,
        app::IList* new_items,
        app::IList* old_items,
        int32_t starting_index,
        int32_t old_starting_index
    )
} // namespace app::classes::System::Collections::Specialized::NotifyCollectionChangedEventArgs

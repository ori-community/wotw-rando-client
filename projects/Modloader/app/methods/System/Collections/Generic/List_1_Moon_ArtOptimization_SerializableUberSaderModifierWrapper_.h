#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_.h>
#include <Modloader/app/structs/SerializableUberSaderModifierWrapper.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort,
        app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* this_ptr,
        app::IComparer_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::SerializableUberSaderModifierWrapper*,
        get_Item,
        app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02FE8D00,
        bool,
        Contains,
        app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* this_ptr,
        app::SerializableUberSaderModifierWrapper* item
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* this_ptr,
        app::SerializableUberSaderModifierWrapper* item
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_ArtOptimization_SerializableUberSaderModifierWrapper_

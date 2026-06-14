#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer_1_Moon_ArtOptimization_SerializableUberShaderWrapper_.h>
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_.h>
#include <Modloader/app/structs/SerializableUberShaderWrapper.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr,
        app::SerializableUberShaderWrapper* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::SerializableUberShaderWrapper*,
        get_Item,
        app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EADB0,
        void,
        Sort,
        app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr,
        app::IComparer_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025E9DF0,
        app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_*,
        GetRange,
        app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr,
        int32_t index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02FE8D00,
        bool,
        Contains,
        app::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_* this_ptr,
        app::SerializableUberShaderWrapper* item
    )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_ArtOptimization_SerializableUberShaderWrapper_

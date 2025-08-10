#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_.h>
#include <Modloader/app/structs/MoonTrailSystem_ComputeBufferWrapper.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_ {
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::MoonTrailSystem_ComputeBufferWrapper*,
        get_Item,
        app::List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1EA40,
        void,
        Insert,
        app::List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_* this_ptr,
        int32_t index,
        app::MoonTrailSystem_ComputeBufferWrapper* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_* this_ptr,
        app::MoonTrailSystem_ComputeBufferWrapper* item
    )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_MoonTrailSystem_ComputeBufferWrapper_

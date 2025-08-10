#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_Moon_IVitalsDeathListener_.h>
#include <Modloader/app/structs/IVitalsDeathListener.h>
#include <Modloader/app/structs/List_1_Moon_IVitalsDeathListener_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IVitalsDeathListener_ {
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_Moon_IVitalsDeathListener_* this_ptr,
        app::IEnumerable_1_Moon_IVitalsDeathListener_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IVitalsDeathListener*, get_Item, app::List_1_Moon_IVitalsDeathListener_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_IVitalsDeathListener_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_IVitalsDeathListener_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IVitalsDeathListener_

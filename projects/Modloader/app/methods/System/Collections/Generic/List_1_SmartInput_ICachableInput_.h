#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICachableInput.h>
#include <Modloader/app/structs/IEnumerable_1_SmartInput_ICachableInput_.h>
#include <Modloader/app/structs/List_1_SmartInput_ICachableInput_.h>

namespace app::classes::System::Collections::Generic::List_1_SmartInput_ICachableInput_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_SmartInput_ICachableInput_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x025E9020,
        void,
        AddRange,
        app::List_1_SmartInput_ICachableInput_* this_ptr,
        app::IEnumerable_1_SmartInput_ICachableInput_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_SmartInput_ICachableInput_* this_ptr, int32_t index, app::ICachableInput* value)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ICachableInput*, get_Item, app::List_1_SmartInput_ICachableInput_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SmartInput_ICachableInput_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_SmartInput_ICachableInput_

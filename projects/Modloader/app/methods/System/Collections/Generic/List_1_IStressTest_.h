#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IStressTest.h>
#include <Modloader/app/structs/List_1_IStressTest_.h>

namespace app::classes::System::Collections::Generic::List_1_IStressTest_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IStressTest*, get_Item, app::List_1_IStressTest_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_IStressTest_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_IStressTest_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_IStressTest_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_IStressTest_

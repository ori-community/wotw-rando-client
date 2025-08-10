#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SpiritShardDescription_.h>
#include <Modloader/app/structs/SpiritShardDescription.h>

namespace app::classes::System::Collections::Generic::List_1_SpiritShardDescription_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SpiritShardDescription*, get_Item, app::List_1_SpiritShardDescription_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_SpiritShardDescription_* this_ptr, int32_t index, app::SpiritShardDescription* value)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_SpiritShardDescription_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_SpiritShardDescription_

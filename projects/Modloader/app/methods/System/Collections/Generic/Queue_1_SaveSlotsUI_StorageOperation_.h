#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_SaveSlotsUI_StorageOperation_.h>
#include <Modloader/app/structs/SaveSlotsUI_StorageOperation.h>

namespace app::classes::System::Collections::Generic::Queue_1_SaveSlotsUI_StorageOperation_ {
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, app::Queue_1_SaveSlotsUI_StorageOperation_* this_ptr, app::SaveSlotsUI_StorageOperation* item)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_SaveSlotsUI_StorageOperation_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA7860, app::SaveSlotsUI_StorageOperation*, Peek, app::Queue_1_SaveSlotsUI_StorageOperation_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::SaveSlotsUI_StorageOperation*, Dequeue, app::Queue_1_SaveSlotsUI_StorageOperation_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Queue_1_SaveSlotsUI_StorageOperation_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Queue_1_SaveSlotsUI_StorageOperation_

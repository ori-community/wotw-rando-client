#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/UpdateManager_Entry.h>

namespace app::classes::System::Collections::Generic::Queue_1_Moon_Driver_UpdateManager_Entry_ {
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::UpdateManager_Entry* item))
    IL2CPP_REGISTER_METHOD(0x02CA78C0, bool, Contains, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::UpdateManager_Entry* item))
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::UpdateManager_Entry*, Dequeue, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Queue_1_Moon_Driver_UpdateManager_Entry_

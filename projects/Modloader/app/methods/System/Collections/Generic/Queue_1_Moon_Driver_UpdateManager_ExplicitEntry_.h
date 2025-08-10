#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_.h>
#include <Modloader/app/structs/UpdateManager_ExplicitEntry.h>

namespace app::classes::System::Collections::Generic::Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::UpdateManager_ExplicitEntry*, Dequeue, app::Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, app::Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_* this_ptr, app::UpdateManager_ExplicitEntry* item)
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor, app::Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_

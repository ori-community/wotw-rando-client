#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Queue_1_Moon_Driver_UpdateManager_GenericEntry_.h>
#include <Modloader/app/structs/UpdateManager_GenericEntry.h>

namespace app::classes::System::Collections::Generic::Queue_1_Moon_Driver_UpdateManager_GenericEntry_ {
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_Moon_Driver_UpdateManager_GenericEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_Moon_Driver_UpdateManager_GenericEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::UpdateManager_GenericEntry*, Dequeue, (app::Queue_1_Moon_Driver_UpdateManager_GenericEntry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_Moon_Driver_UpdateManager_GenericEntry_ * this_ptr, app::UpdateManager_GenericEntry* item))
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor, (app::Queue_1_Moon_Driver_UpdateManager_GenericEntry_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::Queue_1_Moon_Driver_UpdateManager_GenericEntry_

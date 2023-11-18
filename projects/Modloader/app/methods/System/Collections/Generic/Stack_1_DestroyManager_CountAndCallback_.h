#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_DestroyManager_CountAndCallback_.h>
#include <Modloader/app/structs/DestroyManager_CountAndCallback.h>

namespace app::classes::System::Collections::Generic::Stack_1_DestroyManager_CountAndCallback_ {
    IL2CPP_REGISTER_METHOD(0x02CF78E0, void, ctor, (app::Stack_1_DestroyManager_CountAndCallback_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_DestroyManager_CountAndCallback_ * this_ptr, app::DestroyManager_CountAndCallback* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_DestroyManager_CountAndCallback_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::DestroyManager_CountAndCallback*, Pop, (app::Stack_1_DestroyManager_CountAndCallback_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Stack_1_DestroyManager_CountAndCallback_

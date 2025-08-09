#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/List_1_CameraSettings_.h>

namespace app::classes::System::Collections::Generic::List_1_CameraSettings_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_CameraSettings_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_CameraSettings_* this_ptr, app::CameraSettings* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CameraSettings*, get_Item, app::List_1_CameraSettings_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_CameraSettings_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_CameraSettings_

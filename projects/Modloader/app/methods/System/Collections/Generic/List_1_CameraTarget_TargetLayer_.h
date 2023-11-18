#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_CameraTarget_TargetLayer_.h>
#include <Modloader/app/structs/CameraTarget_TargetLayer.h>
#include <Modloader/app/structs/Comparison_1_CameraTarget_TargetLayer_.h>
#include <Modloader/app/structs/IEnumerable_1_CameraTarget_TargetLayer_.h>

namespace app::classes::System::Collections::Generic::List_1_CameraTarget_TargetLayer_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_CameraTarget_TargetLayer_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_CameraTarget_TargetLayer_ * this_ptr, app::CameraTarget_TargetLayer* item))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_2, (app::List_1_CameraTarget_TargetLayer_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CameraTarget_TargetLayer*, get_Item, (app::List_1_CameraTarget_TargetLayer_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_CameraTarget_TargetLayer_ * this_ptr, app::CameraTarget_TargetLayer* item))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_CameraTarget_TargetLayer_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_CameraTarget_TargetLayer_ * this_ptr, app::IEnumerable_1_CameraTarget_TargetLayer_* collection))
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_CameraTarget_TargetLayer_ * this_ptr, app::Comparison_1_CameraTarget_TargetLayer_* comparison))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_CameraTarget_TargetLayer_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_CameraTarget_TargetLayer_

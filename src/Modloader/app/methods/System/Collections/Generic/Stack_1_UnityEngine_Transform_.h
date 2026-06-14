#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Stack_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Transform_ {
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, app::Stack_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, app::Stack_1_UnityEngine_Transform_* this_ptr, app::Transform* item)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::Transform*, Pop, app::Stack_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, app::Stack_1_UnityEngine_Transform_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF78E0, void, ctor_2, app::Stack_1_UnityEngine_Transform_* this_ptr, int32_t capacity)
} // namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Transform_

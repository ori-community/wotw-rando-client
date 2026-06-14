#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_UnityEngine_Rendering_CommandBuffer_.h>
#include <Modloader/app/structs/Stack_1_UnityEngine_Rendering_CommandBuffer_.h>

namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Rendering_CommandBuffer_ {
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, app::Stack_1_UnityEngine_Rendering_CommandBuffer_* this_ptr, app::CommandBuffer* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_UnityEngine_Rendering_CommandBuffer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::CommandBuffer*, Pop, app::Stack_1_UnityEngine_Rendering_CommandBuffer_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF7E60,
        app::Stack_1_T_Enumerator_UnityEngine_Rendering_CommandBuffer_,
        GetEnumerator,
        app::Stack_1_UnityEngine_Rendering_CommandBuffer_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, app::Stack_1_UnityEngine_Rendering_CommandBuffer_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Stack_1_UnityEngine_Rendering_CommandBuffer_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_UnityEngine_Rendering_CommandBuffer_

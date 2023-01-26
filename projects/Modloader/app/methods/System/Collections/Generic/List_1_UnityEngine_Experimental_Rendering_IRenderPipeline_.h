#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_.h>
#include <Modloader/app/structs/IRenderPipeline.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_Experimental_Rendering_IRenderPipeline_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_Experimental_Rendering_IRenderPipeline_, GetEnumerator, (app::List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ * this_ptr, app::IRenderPipeline* item))
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Experimental_Rendering_IRenderPipeline_

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RendererCullingCategoryParameters.h>

namespace app::classes::System::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::RendererCullingCategoryParameters, Invoke, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::Object* input))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::Object* input, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::RendererCullingCategoryParameters, EndInvoke, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_

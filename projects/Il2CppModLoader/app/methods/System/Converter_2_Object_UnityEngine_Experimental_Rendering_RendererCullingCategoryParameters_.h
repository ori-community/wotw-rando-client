#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::RendererCullingCategoryParameters, Invoke, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::Object * input))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::Object * input, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, app::RendererCullingCategoryParameters, EndInvoke, (app::Converter_2_Object_UnityEngine_Experimental_Rendering_RendererCullingCategoryParameters_ * this_ptr, app::IAsyncResult * result))
}

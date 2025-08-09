#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LookupFilter3D.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::Colorful::LookupFilter3D {
    IL2CPP_REGISTER_METHOD(0x03049F70, app::Shader*, get_Shader2DSafe, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304A070, app::Shader*, get_Shader3DSafe, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304A170, app::Material*, get_Material, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304A4B0, void, Start, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304A7B0, void, OnDisable, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304A950, void, Reset, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304A9E0, void, SetIdentityLut, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304AD30, bool, ValidDimensions, app::LookupFilter3D* this_ptr, app::Texture2D* tex2_d)
    IL2CPP_REGISTER_METHOD(0x0304AE60, void, ConvertBaseTexture, app::LookupFilter3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0304B350, void, Apply, app::LookupFilter3D* this_ptr, app::Texture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x0304B550, void, OnRenderImage, app::LookupFilter3D* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x0304B690, void, RenderLut2D, app::LookupFilter3D* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x0304BAC0, void, RenderLut3D, app::LookupFilter3D* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::LookupFilter3D* this_ptr)
} // namespace app::classes::Colorful::LookupFilter3D

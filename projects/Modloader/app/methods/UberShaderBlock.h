#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>

namespace app::classes::UberShaderBlock {
    IL2CPP_REGISTER_METHOD(0x0190AE40, bool, get_HasRotateZ, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190AE70, bool, get_HasMotionVectors, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190AE90, double, get_RandomOffset, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190AF20, app::MeshFilter*, get_Filter, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190B010, bool, get_HasCustomMesh, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190B3C0, app::UberShaderComponent*, get_Component, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190B440, bool, get_UseFog, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005035B0, void, set_UseFog, (app::UberShaderBlock * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0190B520, app::Renderer*, get_Renderer, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190B5F0, bool, get_IsRotated, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190B820, bool, get_IsZOffset, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190B8E0, bool, get_IsZExpand, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCC0, app::Material*, get_MaterialInPrefab, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, set_MaterialInPrefab, (app::UberShaderBlock * this_ptr, app::Material* value))
    IL2CPP_REGISTER_METHOD(0x0190B8F0, bool, get_IsUsingSharedPrefabMaterial, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190B9A0, app::Material*, get_ActiveMaterial, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190BAC0, app::RuntimeTypeHandle, get_TypeId, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190BB70, void, UberShaderEditorUpdate, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190BCC0, void, RandomizeOffset, (app::UberShaderBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190BD30, void, ctor, (app::UberShaderBlock * this_ptr))
} // namespace app::classes::UberShaderBlock

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeTypeHandle.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/UberShaderModifier.h>
#include <Modloader/app/structs/UberShaderTexture.h>

namespace app::classes::UberShaderModifier {
    IL2CPP_REGISTER_METHOD(0x019130E0, app::RuntimeTypeHandle, get_TypeId, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913190, app::UberShaderBlock*, get_AttachedToShaderBlock, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913210, bool, get_HasCageMesh, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019132B0, app::Renderer*, get_Renderer, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913380, app::MeshFilter*, get_Filter, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913450, app::Material*, get_BindMaterial, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913560, bool, IsModifierSupported, (app::UberShaderComponent * comp, app::Type* modifier_type))
    IL2CPP_REGISTER_METHOD(0x019136D0, bool, get_IsSupported, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913880, float, RangeRandom, (app::UberShaderModifier * this_ptr, float b, float mag))
    IL2CPP_REGISTER_METHOD(0x019139A0, void, RandomizeScrolling, (app::UberShaderModifier * this_ptr, app::UberShaderTexture* tex))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsProcedural, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Randomize, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::String__Array*, GetRandomizeOptions, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UberShaderEditorUpdate, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::UberShaderModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPresetCreation, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetQuadExpandSize, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, NeedsMipMap, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ImplementsAlphaMasking, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IEnumerable_1_System_String_*, GetKeywordsForShader, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913B50, app::IEnumerable_1_System_String_*, GetBaseVertexTextureNames, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913CD0, app::String*, GetBaseShaderProperties, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01913D50, app::String*, ShaderlabString, (app::UberShaderModifier * this_ptr, app::String* bind, app::String* type, app::String* def))
    IL2CPP_REGISTER_METHOD(0x019140F0, app::String*, NicifyVariableName, (app::UberShaderModifier * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresNormals, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresTangent, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresVertexColor, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv2, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv3, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv4, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv5, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, RequiresUv6, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoesChangeShape, (app::UberShaderModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SaveCustomMesh, (app::UberShaderModifier * this_ptr, app::Mesh* mesh))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::UberShaderModifier * this_ptr))
} // namespace app::classes::UberShaderModifier

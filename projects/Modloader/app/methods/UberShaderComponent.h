#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AdditiveLayerDistortedModifier.h>
#include <Modloader/app/structs/AdditiveLayerExtraModifier.h>
#include <Modloader/app/structs/AdditiveLayerModifier.h>
#include <Modloader/app/structs/DistortExtraModifier.h>
#include <Modloader/app/structs/DistortModifier.h>
#include <Modloader/app/structs/DodgeLayerModifier.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MaskDissolveModifier.h>
#include <Modloader/app/structs/MaskExtraModifier.h>
#include <Modloader/app/structs/MaskModifier.h>
#include <Modloader/app/structs/MultiplyLayerExtraModifier.h>
#include <Modloader/app/structs/MultiplyLayerModifier.h>
#include <Modloader/app/structs/MultiplyLayerThirdModifier.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TintModifier.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#include <Modloader/app/structs/UberShaderBlockGrabPass.h>
#include <Modloader/app/structs/UberShaderBlockTextured.h>
#include <Modloader/app/structs/UberShaderComponent.h>
#include <Modloader/app/structs/UberShaderModifier.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UberShaderComponent {
    IL2CPP_REGISTER_METHOD(0x0190CF90, app::Transform*, get_TransformCache, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D050, app::String*, get_MaterialStringIdentifier, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D100, app::Renderer*, get_TargetRenderer, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D1D0, app::Vector2, get_Position, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D2F0, void, ForceRebind, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeStrip, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D3E0, app::UberShaderBlock*, get_Block, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D4D0, app::UberShaderBlockTextured*, get_TexturedBlock, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D5A0, app::UberShaderBlockGrabPass*, get_GrabPassBlock, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190D670, app::UberShaderBlockTextured*, CreateTextured, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x0190D7D0, app::UberShaderBlock*, SetBlock, app::UberShaderComponent* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0190D990, app::UberShaderModifier*, GetModifier_1, app::UberShaderComponent* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0190DA70, void, Start, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshAnchoredTextureEditor, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshAnchoredTexturePlaymode, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldRebind, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190DBB0, bool, get_UseNewRebinderStack, )
    IL2CPP_REGISTER_METHOD(0x0190DC50, void, set_UseNewRebinderStack, bool value)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsDoingRebinding, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsDoingRebinding, app::UberShaderComponent* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_RequiresContinuosZUpdateInEditor, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_RequiresContinuosZUpdateInEditor, app::UberShaderComponent* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008543B0, bool, get_RequiresWorldProjectedTexturesUpdate, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_RequiresWorldProjectedTexturesUpdate, app::UberShaderComponent* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190DD00, void, ctor, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190E020, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::Object*, GetModifier_2, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::TintModifier*, GetModifier_3, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::AdditiveLayerModifier*, GetModifier_4, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::AdditiveLayerDistortedModifier*, GetModifier_5, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::AdditiveLayerExtraModifier*, GetModifier_6, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::MaskModifier*, GetModifier_7, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::MaskExtraModifier*, GetModifier_8, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::DistortModifier*, GetModifier_9, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::DistortExtraModifier*, GetModifier_10, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::MultiplyLayerModifier*, GetModifier_11, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::MultiplyLayerExtraModifier*, GetModifier_12, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::MultiplyLayerThirdModifier*, GetModifier_13, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::DodgeLayerModifier*, GetModifier_14, app::UberShaderComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0157BB20, app::MaskDissolveModifier*, GetModifier_15, app::UberShaderComponent* this_ptr)
} // namespace app::classes::UberShaderComponent

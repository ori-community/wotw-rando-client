#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkinningEdge.h>
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule.h>
#include <Modloader/app/structs/UberShaderModifier.h>

namespace app::classes::SkinningEdge {
    IL2CPP_REGISTER_METHOD(0x006BE0D0, app::SkinningEdge_SkinningCapsule*, GetSkinningCapsule, app::SkinningEdge* this_ptr, app::UberShaderModifier* sprite)
    IL2CPP_REGISTER_METHOD(0x006BE320, app::SkinningEdge_SkinningCapsule*, AddSkinningCapsule, app::SkinningEdge* this_ptr, app::UberShaderModifier* sprite)
    IL2CPP_REGISTER_METHOD(0x006BE4A0, void, RemoveSkinningCapsule, app::SkinningEdge* this_ptr, app::UberShaderModifier* sprite)
    IL2CPP_REGISTER_METHOD(0x006BE710, void, ctor, app::SkinningEdge* this_ptr)
} // namespace app::classes::SkinningEdge

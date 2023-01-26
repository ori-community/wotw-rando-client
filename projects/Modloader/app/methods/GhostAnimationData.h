#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GhostAnimationData.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>

namespace app::classes::GhostAnimationData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_AnimationName, (app::GhostAnimationData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::GhostAnimationData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::GhostAnimationData * this_ptr, app::String* animation_name))
    IL2CPP_REGISTER_METHOD(0x008F2640, void, Save, (app::GhostAnimationData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x008F2670, void, Load, (app::GhostAnimationData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x00E13080, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostAnimationData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E13090, int32_t, GetDataSize, (app::GhostAnimationData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (app::GhostAnimationData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (app::GhostAnimationData * this_ptr, bool value))
} // namespace app::classes::GhostAnimationData

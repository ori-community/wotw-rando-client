#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_AnimationParameterData.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_RecordableAnimatorEntry.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>

namespace app::classes::GhostAnimationParameterPlugin_AnimationParameterData {
    IL2CPP_REGISTER_METHOD(
        0x00E13490,
        void,
        SetEntry,
        app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr,
        app::GhostAnimationParameterPlugin_RecordableAnimatorEntry* entry
    )
    IL2CPP_REGISTER_METHOD(0x00E134E0, void, Save, app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr, app::BinaryWriter* binary_writer)
    IL2CPP_REGISTER_METHOD(0x00E13860, void, Load, app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr, app::BinaryReader* binary_reader)
    IL2CPP_REGISTER_METHOD(0x00E13DE0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_Executed, app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_Executed, app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00E13DF0, void, ctor, app::GhostAnimationParameterPlugin_AnimationParameterData* this_ptr)
} // namespace app::classes::GhostAnimationParameterPlugin_AnimationParameterData

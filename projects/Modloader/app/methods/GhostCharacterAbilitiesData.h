#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GhostCharacterAbilitiesData.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/HashSet_1_AbilityType_.h>

namespace app::classes::GhostCharacterAbilitiesData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::HashSet_1_AbilityType_*, get_Abilities, app::GhostCharacterAbilitiesData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E15C70, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, app::GhostCharacterAbilitiesData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E15C80, int32_t, GetDataSize, app::GhostCharacterAbilitiesData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E15D10, void, ctor_1, app::GhostCharacterAbilitiesData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E15E90, void, ctor_2, app::GhostCharacterAbilitiesData* this_ptr, app::BinaryReader* binary_reader)
    IL2CPP_REGISTER_METHOD(0x00E16030, void, Record, app::BinaryWriter* binary_writer)
    IL2CPP_REGISTER_METHOD(0x00E163D0, void, Save, app::GhostCharacterAbilitiesData* this_ptr, app::BinaryWriter* binary_writer)
    IL2CPP_REGISTER_METHOD(0x00E16570, void, Load, app::GhostCharacterAbilitiesData* this_ptr, app::BinaryReader* binary_reader)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, app::GhostCharacterAbilitiesData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, app::GhostCharacterAbilitiesData* this_ptr, bool value)
} // namespace app::classes::GhostCharacterAbilitiesData

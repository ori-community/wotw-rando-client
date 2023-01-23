#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/GhostCharacterData.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/BinaryWriter.h>

namespace app::classes::GhostCharacterData {
    IL2CPP_REGISTER_METHOD(0x00E16AD0, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostCharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E16AE0, int32_t, GetDataSize, (app::GhostCharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E16AF0, void, ctor_1, (app::GhostCharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E16FE0, void, ctor_2, (app::GhostCharacterData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x00E16FF0, void, ResetPrevious, (app::GhostCharacterData * previous))
    IL2CPP_REGISTER_METHOD(0x00E17150, void, UpdatePrevious, (app::GhostCharacterData * previous, app::Vector3 pos, app::Vector3 feet_pos, app::Vector2 speed, bool face_left, float feet_angle, app::Quaternion rot))
    IL2CPP_REGISTER_METHOD(0x00E171C0, void, Record, (app::BinaryWriter * binary_writer, app::GhostCharacterData* previous))
    IL2CPP_REGISTER_METHOD(0x00E17C50, void, Save, (app::GhostCharacterData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00E17DB0, void, Load, (app::GhostCharacterData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_Executed, (app::GhostCharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_Executed, (app::GhostCharacterData * this_ptr, bool value))
} // namespace app::classes::GhostCharacterData

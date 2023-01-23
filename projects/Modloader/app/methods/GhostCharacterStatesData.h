#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Boolean_.h>
#include <Modloader/app/structs/GhostCharacterStatesData.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>

namespace app::classes::GhostCharacterStatesData {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Dictionary_2_System_Int32_System_Boolean_*, get_States, (app::GhostCharacterStatesData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E18A30, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostCharacterStatesData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E18A40, int32_t, GetDataSize, (app::GhostCharacterStatesData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E18AD0, void, ctor_1, (app::GhostCharacterStatesData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E18C40, void, ctor_2, (app::GhostCharacterStatesData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x00E18DD0, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x00E190B0, void, Save, (app::GhostCharacterStatesData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x00E19390, void, Load, (app::GhostCharacterStatesData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (app::GhostCharacterStatesData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (app::GhostCharacterStatesData * this_ptr, bool value))
} // namespace app::classes::GhostCharacterStatesData

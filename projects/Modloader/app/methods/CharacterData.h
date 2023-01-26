#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/CharacterData.h>
#include <Modloader/app/structs/PlatformBehaviour.h>

namespace app::classes::CharacterData {
    IL2CPP_REGISTER_METHOD(0x00420230, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::CharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104D430, app::PlatformBehaviour*, get_CurrentPlatformBehaviour, ())
    IL2CPP_REGISTER_METHOD(0x0104D9C0, void, Initialize, (app::CharacterData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104DB90, void, Record, (app::BinaryWriter * binary_writer))
    IL2CPP_REGISTER_METHOD(0x0104DE80, void, Save, (app::CharacterData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x0104DF30, void, Load, (app::CharacterData * this_ptr, app::BinaryReader* binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CharacterData * this_ptr))
} // namespace app::classes::CharacterData

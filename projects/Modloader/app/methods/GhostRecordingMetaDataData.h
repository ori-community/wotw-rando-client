#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GhostRecordingMetaDataData.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>

namespace app::classes::GhostRecordingMetaDataData {
    IL2CPP_REGISTER_METHOD(0x007E3F10, int64_t, GetSize, (app::GhostRecordingMetaDataData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E3F20, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostRecordingMetaDataData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E3F30, int32_t, GetDataSize, (app::GhostRecordingMetaDataData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (app::GhostRecordingMetaDataData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (app::GhostRecordingMetaDataData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007E3F40, app::PlatformBehaviour*, get_CurrentPlatformBehaviour, ())
    IL2CPP_REGISTER_METHOD(0x007E3FF0, void, ctor_1, (app::GhostRecordingMetaDataData * this_ptr, bool loading_from_file))
    IL2CPP_REGISTER_METHOD(0x007E43C0, void, ctor_2, (app::GhostRecordingMetaDataData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007E43D0, void, Save, (app::GhostRecordingMetaDataData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x007E4470, void, Load, (app::GhostRecordingMetaDataData * this_ptr, app::BinaryReader* binary_reader))
} // namespace app::classes::GhostRecordingMetaDataData

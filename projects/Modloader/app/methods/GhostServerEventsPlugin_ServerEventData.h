#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostServerEventsPlugin_ServerEventData {
    IL2CPP_REGISTER_METHOD(0x007E7250, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostServerEventsPlugin_ServerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostServerEventsPlugin_ServerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Executed, (app::GhostServerEventsPlugin_ServerEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Executed, (app::GhostServerEventsPlugin_ServerEventData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007E7260, void, Load, (app::GhostServerEventsPlugin_ServerEventData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007E75F0, void, Save, (app::GhostServerEventsPlugin_ServerEventData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x007E78D0, void, ctor, (app::GhostServerEventsPlugin_ServerEventData * this_ptr))
} // namespace app::classes::GhostServerEventsPlugin_ServerEventData

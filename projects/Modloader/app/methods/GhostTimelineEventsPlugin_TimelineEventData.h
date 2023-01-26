#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/GhostTimelineEventsPlugin_TimelineEventData.h>

namespace app::classes::GhostTimelineEventsPlugin_TimelineEventData {
    IL2CPP_REGISTER_METHOD(0x007EC140, app::GhostFrame_FrameDataTypes__Enum, get_FrameType, (app::GhostTimelineEventsPlugin_TimelineEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (app::GhostTimelineEventsPlugin_TimelineEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (app::GhostTimelineEventsPlugin_TimelineEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (app::GhostTimelineEventsPlugin_TimelineEventData * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007EC150, void, Load, (app::GhostTimelineEventsPlugin_TimelineEventData * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x007EC1C0, void, Save, (app::GhostTimelineEventsPlugin_TimelineEventData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GhostTimelineEventsPlugin_TimelineEventData * this_ptr))
} // namespace app::classes::GhostTimelineEventsPlugin_TimelineEventData

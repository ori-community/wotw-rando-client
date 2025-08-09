#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoEvent.h>
#include <Modloader/app/structs/MonoEventInfo.h>

namespace app::classes::System::Reflection::MonoEventInfo {
    IL2CPP_REGISTER_METHOD(0x02690470, void, get_event_info, app::MonoEvent* ev, app::MonoEventInfo* info)
    IL2CPP_REGISTER_METHOD(0x02690580, app::MonoEventInfo, GetEventInfo, app::MonoEvent* ev)
} // namespace app::classes::System::Reflection::MonoEventInfo

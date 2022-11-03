#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RecorderMessagePlugin {
    IL2CPP_REGISTER_METHOD(0x008F3470, void, Awake, (app::RecorderMessagePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::RecorderMessagePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F3650, void, ToggleShowMessages, (app::RecorderMessagePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_ShowMessages, (app::RecorderMessagePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F3770, void, set_ShowMessages, (app::RecorderMessagePlugin * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::RecorderMessagePlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x008F3890, void, RecordCycle, (app::RecorderMessagePlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x008F3AD0, void, Exit, (app::RecorderMessagePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F3B70, void, OnExit, (app::RecorderMessagePlugin * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757570, RecorderMessagePlugin_OnExit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008F44B0, app::Dictionary_2_RecorderMessageData_System_Int32_*, ExtractRecorderMessagesData, (app::RecorderData * recorder_data))
    IL2CPP_REGISTER_METHOD(0x008F4850, void, ctor, (app::RecorderMessagePlugin * this_ptr))
} // namespace app::classes::RecorderMessagePlugin

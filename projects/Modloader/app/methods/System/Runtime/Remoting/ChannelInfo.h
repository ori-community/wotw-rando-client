#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChannelInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Runtime::Remoting::ChannelInfo {
    IL2CPP_REGISTER_METHOD(0x01A9AAA0, void, ctor_1, (app::ChannelInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A9AB40, void, ctor_2, (app::ChannelInfo * this_ptr, app::Object* remote_channel_data))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object__Array*, get_ChannelData, (app::ChannelInfo * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::ChannelInfo

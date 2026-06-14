#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderInput.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RecorderInput {
    IL2CPP_REGISTER_METHOD(0x008F1A10, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x008F1AC0, bool, IsReplayProvided, )
    IL2CPP_REGISTER_METHOD(0x008F1BA0, void, Init, )
    IL2CPP_REGISTER_METHOD(0x008F2140, app::String*, GetReplayCommandFilePath, )
    IL2CPP_REGISTER_METHOD(0x008F2210, void, Save, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RecorderInput* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F2550, void, cctor, )
} // namespace app::classes::RecorderInput

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SerializationSetupGroup {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::SerializationSetupGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::SerializationSetupGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB8450, void, OnAfterDeserialize, (app::SerializationSetupGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB8720, void, ctor, (app::SerializationSetupGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB8A30, void, cctor, ())
} // namespace app::classes::SerializationSetupGroup

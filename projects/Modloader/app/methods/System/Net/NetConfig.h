#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NetConfig.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::NetConfig {
    IL2CPP_REGISTER_METHOD(0x01E71D00, void, ctor, (app::NetConfig * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object*, ICloneable_Clone, (app::NetConfig * this_ptr))
} // namespace app::classes::System::Net::NetConfig

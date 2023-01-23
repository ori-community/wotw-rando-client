#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WebClient_ProgressData.h>

namespace app::classes::System::Net::WebClient_ProgressData {
    IL2CPP_REGISTER_METHOD(0x01D60B20, void, Reset, (app::WebClient_ProgressData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D60B40, void, ctor, (app::WebClient_ProgressData * this_ptr))
} // namespace app::classes::System::Net::WebClient_ProgressData

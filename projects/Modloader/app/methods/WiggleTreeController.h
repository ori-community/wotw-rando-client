#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WiggleTreeController {
    IL2CPP_REGISTER_METHOD(0x00574860, app::WiggleTreeController_WiggleSettings*, get_CurrentWiggleData, (app::WiggleTreeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00574920, void, FixedUpdate, (app::WiggleTreeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00574C40, void, Serialize, (app::WiggleTreeController * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00574C70, void, ctor, (app::WiggleTreeController * this_ptr))
} // namespace app::classes::WiggleTreeController

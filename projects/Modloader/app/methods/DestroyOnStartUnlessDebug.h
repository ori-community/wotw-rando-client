#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DestroyOnStartUnlessDebug.h>

namespace app::classes::DestroyOnStartUnlessDebug {
    IL2CPP_REGISTER_METHOD(0x00B8D370, void, Start, (app::DestroyOnStartUnlessDebug * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DestroyOnStartUnlessDebug * this_ptr))
} // namespace app::classes::DestroyOnStartUnlessDebug

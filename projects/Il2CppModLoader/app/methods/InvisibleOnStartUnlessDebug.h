#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InvisibleOnStartUnlessDebug {
    IL2CPP_REGISTER_METHOD(0x00645B00, void, Start, (app::InvisibleOnStartUnlessDebug * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::InvisibleOnStartUnlessDebug * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject *, IDisableOnRecordablePreview_get_gameObject, (app::InvisibleOnStartUnlessDebug * this_ptr))
}

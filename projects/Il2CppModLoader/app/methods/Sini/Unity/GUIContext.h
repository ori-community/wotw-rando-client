#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Sini::Unity::GUIContext {
    IL2CPP_REGISTER_METHOD(0x03114A60, void, ctor, (app::GUIContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03114C70, app::IDisposable *, Push, ())
    IL2CPP_REGISTER_METHOD(0x03114DB0, void, Dispose, (app::GUIContext * this_ptr))
}

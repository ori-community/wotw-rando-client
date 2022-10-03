#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::NintendoSaveFileSystem {
    IL2CPP_REGISTER_METHOD(0x0257B520, app::String*, get_MountName, ())
    IL2CPP_REGISTER_METHOD(0x0257B5A0, void, SetExistsCachedValue, (app::String * key, bool value))
    IL2CPP_REGISTER_METHOD(0x0257B750, void, Debug, (app::String * text))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NintendoSaveFileSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257B7F0, void, cctor, ())
} // namespace app::classes::NintendoSaveFileSystem

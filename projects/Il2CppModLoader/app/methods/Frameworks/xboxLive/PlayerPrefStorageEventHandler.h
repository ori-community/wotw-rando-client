#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::xboxLive::PlayerPrefStorageEventHandler {
    IL2CPP_REGISTER_METHOD(0x00F6B820, app::Task*, Write, (app::PlayerPrefStorageEventHandler * this_ptr, app::String* key, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x00F6BA20, app::Task_1_System_Byte_*, Read, (app::PlayerPrefStorageEventHandler * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x00F6BB50, app::Task*, Clear, (app::PlayerPrefStorageEventHandler * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerPrefStorageEventHandler * this_ptr))
} // namespace app::classes::frameworks::xboxLive::PlayerPrefStorageEventHandler

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::xboxLive::FileBasedStorageHandler {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::FileBasedStorageHandler * this_ptr, app::String* source_key))
    IL2CPP_REGISTER_METHOD(0x00F69FC0, app::Task*, Write, (app::FileBasedStorageHandler * this_ptr, app::String* key, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x00F6A0E0, app::Task_1_System_Byte_*, Read, (app::FileBasedStorageHandler * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x00F6A220, app::Task*, Clear, (app::FileBasedStorageHandler * this_ptr, app::String* key))
} // namespace app::classes::frameworks::xboxLive::FileBasedStorageHandler

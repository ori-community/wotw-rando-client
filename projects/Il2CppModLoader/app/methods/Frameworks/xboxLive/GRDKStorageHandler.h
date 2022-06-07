#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::frameworks::xboxLive::GRDKStorageHandler {
    IL2CPP_REGISTER_METHOD(0x00F6A350, app::Task *, Write, (app::GRDKStorageHandler * this_ptr, app::String * key, app::Byte__Array * data))
    IL2CPP_REGISTER_METHOD(0x00F6A490, app::Task_1_System_Byte_ *, Read, (app::GRDKStorageHandler * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHOD(0x00F6A5E0, app::Task *, Clear, (app::GRDKStorageHandler * this_ptr, app::String * key))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GRDKStorageHandler * this_ptr))
}

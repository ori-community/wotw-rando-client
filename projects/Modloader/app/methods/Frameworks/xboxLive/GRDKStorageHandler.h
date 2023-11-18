#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/GRDKStorageHandler.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>

namespace app::classes::frameworks::xboxLive::GRDKStorageHandler {
    IL2CPP_REGISTER_METHOD(0x00F6A350, app::Task*, Write, (app::GRDKStorageHandler * this_ptr, app::String* key, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x00F6A490, app::Task_1_System_Byte_*, Read, (app::GRDKStorageHandler * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x00F6A5E0, app::Task*, Clear, (app::GRDKStorageHandler * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GRDKStorageHandler * this_ptr))
} // namespace app::classes::frameworks::xboxLive::GRDKStorageHandler

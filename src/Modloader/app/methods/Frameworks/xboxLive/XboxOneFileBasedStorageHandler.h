#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/XboxOneFileBasedStorageHandler.h>

namespace app::classes::frameworks::xboxLive::XboxOneFileBasedStorageHandler {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::XboxOneFileBasedStorageHandler* this_ptr, app::String* source_key)
    IL2CPP_REGISTER_METHOD(0x00F6BE50, app::Task*, Write, app::XboxOneFileBasedStorageHandler* this_ptr, app::String* key, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x00F6BF90, app::Task_1_System_Byte_*, Read, app::XboxOneFileBasedStorageHandler* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(0x00F6C230, app::Task*, Clear, app::XboxOneFileBasedStorageHandler* this_ptr, app::String* key)
} // namespace app::classes::frameworks::xboxLive::XboxOneFileBasedStorageHandler

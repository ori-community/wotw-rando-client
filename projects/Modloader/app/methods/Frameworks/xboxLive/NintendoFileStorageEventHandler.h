#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::frameworks::xboxLive::NintendoFileStorageEventHandler {
    IL2CPP_REGISTER_METHOD(0x00F6A710, app::Object*, ByteArrayToData, (app::NintendoFileStorageEventHandler * this_ptr, app::Byte__Array* bytes))
    IL2CPP_REGISTER_METHOD(0x00F6ABA0, app::Byte__Array*, DataToByteArray, (app::NintendoFileStorageEventHandler * this_ptr, app::Object* data))
    IL2CPP_REGISTER_METHOD(0x00F6AEA0, void, ctor, (app::NintendoFileStorageEventHandler * this_ptr, app::String* source_key))
    IL2CPP_REGISTER_METHOD(0x00F6B030, app::Task*, Write, (app::NintendoFileStorageEventHandler * this_ptr, app::String* key, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x00F6B1B0, app::Task_1_System_Byte_*, Read, (app::NintendoFileStorageEventHandler * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x00F6B260, app::Task*, Clear, (app::NintendoFileStorageEventHandler * this_ptr, app::String* key))
} // namespace app::classes::frameworks::xboxLive::NintendoFileStorageEventHandler

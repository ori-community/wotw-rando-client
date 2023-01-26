#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DebugHelper.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::Mono::Security::Protocol::Tls::DebugHelper {
    IL2CPP_REGISTER_METHOD(0x01F6A0F0, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine_1, (app::String * format, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine_2, (app::String * message))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine_3, (app::String * message, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteBuffer_1, (app::Byte__Array * buffer))
    IL2CPP_REGISTER_METHOD(0x01F6A170, void, WriteBuffer_2, (app::Byte__Array * buffer, int32_t index, int32_t length))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DebugHelper * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::DebugHelper

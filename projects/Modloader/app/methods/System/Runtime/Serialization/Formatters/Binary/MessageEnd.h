#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MessageEnd.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/_BinaryWriter.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::MessageEnd {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MessageEnd* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D931F0, void, Write, app::MessageEnd* this_ptr, app::_BinaryWriter* sout)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Read, app::MessageEnd* this_ptr, app::_BinaryParser* input)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_1, app::MessageEnd* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump_2, app::MessageEnd* this_ptr, app::Stream* sout)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::MessageEnd

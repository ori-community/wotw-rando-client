#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryAssembly.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/_BinaryWriter.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BinaryAssembly* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, Set, app::BinaryAssembly* this_ptr, int32_t assem_id, app::String* assembly_string)
    IL2CPP_REGISTER_METHOD(0x01D8C0C0, void, Write, app::BinaryAssembly* this_ptr, app::_BinaryWriter* sout)
    IL2CPP_REGISTER_METHOD(0x01D8C150, void, Read, app::BinaryAssembly* this_ptr, app::_BinaryParser* input)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, app::BinaryAssembly* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly

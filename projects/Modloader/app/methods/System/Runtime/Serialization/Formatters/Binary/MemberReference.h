#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemberReference.h>
#include <Modloader/app/structs/_BinaryWriter.h>
#include <Modloader/app/structs/_BinaryParser.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::MemberReference {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MemberReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, Set, (app::MemberReference * this_ptr, int32_t id_ref))
    IL2CPP_REGISTER_METHOD(0x01D93180, void, Write, (app::MemberReference * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01D8D460, void, Read, (app::MemberReference * this_ptr, app::_BinaryParser* input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::MemberReference * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::MemberReference

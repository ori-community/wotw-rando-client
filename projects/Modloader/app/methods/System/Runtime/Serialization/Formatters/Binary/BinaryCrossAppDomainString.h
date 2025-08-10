#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryCrossAppDomainString.h>
#include <Modloader/app/structs/_BinaryParser.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BinaryCrossAppDomainString* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D8D3F0, void, Read, app::BinaryCrossAppDomainString* this_ptr, app::_BinaryParser* input)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, app::BinaryCrossAppDomainString* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString

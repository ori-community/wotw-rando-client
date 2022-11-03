#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BinaryCrossAppDomainMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D8D460, void, Read, (app::BinaryCrossAppDomainMap * this_ptr, app::_BinaryParser* input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::BinaryCrossAppDomainMap * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainMap

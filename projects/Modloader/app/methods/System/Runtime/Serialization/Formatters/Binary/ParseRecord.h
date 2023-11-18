#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ParseRecord.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ParseRecord {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ParseRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D9E140, void, Init, (app::ParseRecord * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D9E200, void, cctor, ())
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::ParseRecord

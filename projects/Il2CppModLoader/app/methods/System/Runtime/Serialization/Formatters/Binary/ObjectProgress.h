#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ObjectProgress {
    IL2CPP_REGISTER_METHOD(0x01D94700, void, ctor, (app::ObjectProgress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D94850, void, Init, (app::ObjectProgress * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D948B0, void, ArrayCountIncrement, (app::ObjectProgress * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01D948C0, bool, GetNext, (app::ObjectProgress * this_ptr, app::BinaryTypeEnum__Enum * out_binary_type_enum, app::Object * * out_type_information))
    IL2CPP_REGISTER_METHOD(0x01D94A10, void, cctor, ())
}

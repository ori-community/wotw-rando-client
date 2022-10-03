#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryArray {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::BinaryArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C5130, void, ctor_2, (app::BinaryArray * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHOD(0x01D8B670, void, Set, (app::BinaryArray * this_ptr, int32_t object_id, int32_t rank, app::Int32__Array* length_a, app::Int32__Array* lower_bound_a, app::BinaryTypeEnum__Enum binary_type_enum, app::Object* type_information, app::BinaryArrayTypeEnum__Enum binary_array_type_enum, int32_t assem_id))
    IL2CPP_REGISTER_METHOD(0x01D8B6E0, void, Write, (app::BinaryArray * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01D8BBC0, void, Read, (app::BinaryArray * this_ptr, app::_BinaryParser* input))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryArray

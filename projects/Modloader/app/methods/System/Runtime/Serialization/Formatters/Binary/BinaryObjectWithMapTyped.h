#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::BinaryObjectWithMapTyped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_2, (app::BinaryObjectWithMapTyped * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHOD(0x01D8EE00, void, Set, (app::BinaryObjectWithMapTyped * this_ptr, int32_t object_id, app::String* name, int32_t num_members, app::String__Array* member_names, app::BinaryTypeEnum__Enum__Array* binary_type_enum_a, app::Object__Array* type_information_a, app::Int32__Array* member_assem_ids, int32_t assem_id))
    IL2CPP_REGISTER_METHOD(0x01D8EE50, void, Write, (app::BinaryObjectWithMapTyped * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01D8F0F0, void, Read, (app::BinaryObjectWithMapTyped * this_ptr, app::_BinaryParser* input))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped

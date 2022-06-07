#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::BinaryObjectWithMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_2, (app::BinaryObjectWithMap * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHOD(0x01D8EA90, void, Set, (app::BinaryObjectWithMap * this_ptr, int32_t object_id, app::String * name, int32_t num_members, app::String__Array * member_names, int32_t assem_id))
    IL2CPP_REGISTER_METHOD(0x01D8EAC0, void, Write, (app::BinaryObjectWithMap * this_ptr, app::_BinaryWriter * sout))
    IL2CPP_REGISTER_METHOD(0x01D8EC10, void, Read, (app::BinaryObjectWithMap * this_ptr, app::_BinaryParser * input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::BinaryObjectWithMap * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MemberPrimitiveUnTyped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, Set_1, (app::MemberPrimitiveUnTyped * this_ptr, app::InternalPrimitiveTypeE__Enum type_information, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, Set_2, (app::MemberPrimitiveUnTyped * this_ptr, app::InternalPrimitiveTypeE__Enum type_information))
    IL2CPP_REGISTER_METHOD(0x01D93120, void, Write, (app::MemberPrimitiveUnTyped * this_ptr, app::_BinaryWriter* sout))
    IL2CPP_REGISTER_METHOD(0x01D93150, void, Read, (app::MemberPrimitiveUnTyped * this_ptr, app::_BinaryParser* input))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::MemberPrimitiveUnTyped * this_ptr))
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped

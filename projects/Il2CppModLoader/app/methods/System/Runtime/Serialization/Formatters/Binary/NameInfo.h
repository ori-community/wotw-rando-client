#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::NameInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NameInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D93790, void, Init, (app::NameInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D937C0, bool, get_IsSealed, (app::NameInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D93810, app::String *, get_NIname, (app::NameInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_NIname, (app::NameInfo * this_ptr, app::String * value))
}

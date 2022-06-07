#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::IncrementalReadDummyDecoder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFull, (app::IncrementalReadDummyDecoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199D990, int32_t, Decode, (app::IncrementalReadDummyDecoder * this_ptr, app::Char__Array * chars, int32_t start_pos, int32_t len))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IncrementalReadDummyDecoder * this_ptr))
}

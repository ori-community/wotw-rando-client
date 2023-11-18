#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IncrementalReadDummyDecoder.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::IncrementalReadDummyDecoder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsFull, (app::IncrementalReadDummyDecoder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0199D990, int32_t, Decode, (app::IncrementalReadDummyDecoder * this_ptr, app::Char__Array* chars, int32_t start_pos, int32_t len))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IncrementalReadDummyDecoder * this_ptr))
} // namespace app::classes::System::Xml::IncrementalReadDummyDecoder

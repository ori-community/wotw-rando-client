#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::LineInfo {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::LineInfo__Boxed * this_ptr, int32_t line_no, int32_t line_pos))
    IL2CPP_REGISTER_METHOD(0x00115520, void, Set, (app::LineInfo__Boxed * this_ptr, int32_t line_no, int32_t line_pos))
}

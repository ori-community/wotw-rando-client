#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TestTagHelper {
    IL2CPP_REGISTER_METHOD(0x010DFDC0, app::String*, TagString, (app::String * input, app::TestTagHelper_TestTypeTag__Enum tag, bool break_line))
    IL2CPP_REGISTER_METHOD(0x010E0430, app::String*, TagOpen, (app::TestTagHelper_TestTypeTag__Enum tag))
    IL2CPP_REGISTER_METHOD(0x010E04F0, app::String*, TagClose, (app::TestTagHelper_TestTypeTag__Enum tag))
    IL2CPP_REGISTER_METHOD(0x010E05B0, app::String*, ExtractText_1, (app::String * input, app::TestTagHelper_TestTypeTag__Enum* tag))
    IL2CPP_REGISTER_METHOD(0x010E0800, app::String*, ExtractText_2, (app::String * input, app::TestTagHelper_TestTypeTag__Enum tag))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TestTagHelper * this_ptr))
} // namespace app::classes::TestTagHelper

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/RegexCode.h>
#include <Modloader/app/structs/RegexInterpreter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::RegularExpressions::RegexInterpreter {
    IL2CPP_REGISTER_METHOD(0x02593420, void, ctor, app::RegexInterpreter* this_ptr, app::RegexCode* code, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x02593480, void, InitTrackCount, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025934B0, void, Advance_1, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025934C0, void, Advance_2, app::RegexInterpreter* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x02593540, void, Goto, app::RegexInterpreter* this_ptr, int32_t newpos)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, Textto, app::RegexInterpreter* this_ptr, int32_t newpos)
    IL2CPP_REGISTER_METHOD(0x025935D0, void, Trackto, app::RegexInterpreter* this_ptr, int32_t newpos)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, Textstart, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, Textpos, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025935F0, int32_t, Trackpos, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593610, void, TrackPush_1, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593660, void, TrackPush_2, app::RegexInterpreter* this_ptr, int32_t i1)
    IL2CPP_REGISTER_METHOD(0x025936F0, void, TrackPush_3, app::RegexInterpreter* this_ptr, int32_t i1, int32_t i2)
    IL2CPP_REGISTER_METHOD(0x025937B0, void, TrackPush_4, app::RegexInterpreter* this_ptr, int32_t i1, int32_t i2, int32_t i3)
    IL2CPP_REGISTER_METHOD(0x025938C0, void, TrackPush2_1, app::RegexInterpreter* this_ptr, int32_t i1)
    IL2CPP_REGISTER_METHOD(0x02593950, void, TrackPush2_2, app::RegexInterpreter* this_ptr, int32_t i1, int32_t i2)
    IL2CPP_REGISTER_METHOD(0x02593A20, void, Backtrack, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593B30, void, SetOperator, app::RegexInterpreter* this_ptr, int32_t op)
    IL2CPP_REGISTER_METHOD(0x00E84200, void, TrackPop_1, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593B60, void, TrackPop_2, app::RegexInterpreter* this_ptr, int32_t framesize)
    IL2CPP_REGISTER_METHOD(0x02593B70, int32_t, TrackPeek_1, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593BB0, int32_t, TrackPeek_2, app::RegexInterpreter* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x02593BF0, void, StackPush_1, app::RegexInterpreter* this_ptr, int32_t i1)
    IL2CPP_REGISTER_METHOD(0x02593C40, void, StackPush_2, app::RegexInterpreter* this_ptr, int32_t i1, int32_t i2)
    IL2CPP_REGISTER_METHOD(0x02593CC0, void, StackPop_1, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593CD0, void, StackPop_2, app::RegexInterpreter* this_ptr, int32_t framesize)
    IL2CPP_REGISTER_METHOD(0x02593CE0, int32_t, StackPeek_1, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593D20, int32_t, StackPeek_2, app::RegexInterpreter* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x00C03C70, int32_t, Operator, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593D60, int32_t, Operand, app::RegexInterpreter* this_ptr, int32_t i)
    IL2CPP_REGISTER_METHOD(0x02593DB0, int32_t, Leftchars, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593DC0, int32_t, Rightchars, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593DD0, int32_t, Bump, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593DF0, int32_t, Forwardchars, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593E10, char16_t, Forwardcharnext, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02593F20, bool, Stringmatch, app::RegexInterpreter* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x02594110, bool, Refmatch, app::RegexInterpreter* this_ptr, int32_t index, int32_t len)
    IL2CPP_REGISTER_METHOD(0x02594310, void, Backwardnext, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02594330, char16_t, CharAt, app::RegexInterpreter* this_ptr, int32_t j)
    IL2CPP_REGISTER_METHOD(0x02594350, bool, FindFirstChar, app::RegexInterpreter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02594730, void, Go, app::RegexInterpreter* this_ptr)
} // namespace app::classes::System::Text::RegularExpressions::RegexInterpreter

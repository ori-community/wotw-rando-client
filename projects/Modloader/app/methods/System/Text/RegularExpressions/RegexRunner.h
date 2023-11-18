#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegexRunner.h>
#include <Modloader/app/structs/Match.h>
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Text::RegularExpressions::RegexRunner {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A77620, app::Match*, Scan, (app::RegexRunner * this_ptr, app::Regex* regex, app::String* text, int32_t textbeg, int32_t textend, int32_t textstart, int32_t prevlen, bool quick, app::TimeSpan timeout))
    IL2CPP_REGISTER_METHOD(0x02A779E0, void, StartTimeoutWatch, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A77A40, void, CheckTimeout, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A77BB0, void, DoCheckTimeout, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A77D00, void, InitMatch, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A78160, app::Match*, TidyMatch, (app::RegexRunner * this_ptr, bool quick))
    IL2CPP_REGISTER_METHOD(0x02A781B0, void, EnsureStorage, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A78380, bool, IsBoundary, (app::RegexRunner * this_ptr, int32_t index, int32_t startpos, int32_t endpos))
    IL2CPP_REGISTER_METHOD(0x02A784C0, bool, IsECMABoundary, (app::RegexRunner * this_ptr, int32_t index, int32_t startpos, int32_t endpos))
    IL2CPP_REGISTER_METHOD(0x02A78600, void, DoubleTrack, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A786F0, void, DoubleStack, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A787E0, void, DoubleCrawl, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A788D0, void, Crawl, (app::RegexRunner * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02A78A10, int32_t, Popcrawl, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A78A50, int32_t, Crawlpos, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A78A70, void, Capture, (app::RegexRunner * this_ptr, int32_t capnum, int32_t start, int32_t end))
    IL2CPP_REGISTER_METHOD(0x02A78B00, void, TransferCapture, (app::RegexRunner * this_ptr, int32_t capnum, int32_t uncapnum, int32_t start, int32_t end))
    IL2CPP_REGISTER_METHOD(0x02A78C30, void, Uncapture, (app::RegexRunner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A78C90, bool, IsMatched, (app::RegexRunner * this_ptr, int32_t cap))
    IL2CPP_REGISTER_METHOD(0x02A78CC0, int32_t, MatchIndex, (app::RegexRunner * this_ptr, int32_t cap))
    IL2CPP_REGISTER_METHOD(0x02A78CF0, int32_t, MatchLength, (app::RegexRunner * this_ptr, int32_t cap))
} // namespace app::classes::System::Text::RegularExpressions::RegexRunner

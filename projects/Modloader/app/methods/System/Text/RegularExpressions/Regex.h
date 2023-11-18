#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/CachedCodeEntry.h>
#include <Modloader/app/structs/Match.h>
#include <Modloader/app/structs/MatchCollection.h>
#include <Modloader/app/structs/RegexOptions__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Text::RegularExpressions::Regex {
    IL2CPP_REGISTER_METHOD(0x025842D0, void, ctor_1, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02584380, void, ctor_2, (app::Regex * this_ptr, app::String* pattern))
    IL2CPP_REGISTER_METHOD(0x02584460, void, ctor_3, (app::Regex * this_ptr, app::String* pattern, app::RegexOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x02584540, void, ctor_4, (app::Regex * this_ptr, app::String* pattern, app::RegexOptions__Enum options, app::TimeSpan match_timeout, bool use_cache))
    IL2CPP_REGISTER_METHOD(0x02584B00, void, ctor_5, (app::Regex * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02584C30, void, ISerializable_GetObjectData, (app::Regex * this_ptr, app::SerializationInfo* si, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02584D30, void, ValidateMatchTimeout, (app::TimeSpan match_timeout))
    IL2CPP_REGISTER_METHOD(0x02584EC0, app::TimeSpan, InitDefaultMatchTimeout, ())
    IL2CPP_REGISTER_METHOD(0x025852F0, app::String*, Escape, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::RegexOptions__Enum, get_Options, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::TimeSpan, get_MatchTimeout, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025853C0, bool, get_RightToLeft, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, ToString, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025853D0, app::String*, GroupNameFromNumber, (app::Regex * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02585590, int32_t, GroupNumberFromName, (app::Regex * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x025856F0, bool, IsMatch_1, (app::Regex * this_ptr, app::String* input))
    IL2CPP_REGISTER_METHOD(0x02585850, bool, IsMatch_2, (app::Regex * this_ptr, app::String* input, int32_t startat))
    IL2CPP_REGISTER_METHOD(0x02585950, app::Match*, Match_1, (app::Regex * this_ptr, app::String* input))
    IL2CPP_REGISTER_METHOD(0x02585A30, app::Match*, Match_2, (app::Regex * this_ptr, app::String* input, int32_t startat))
    IL2CPP_REGISTER_METHOD(0x02585B20, app::MatchCollection*, Matches_1, (app::Regex * this_ptr, app::String* input))
    IL2CPP_REGISTER_METHOD(0x02585C00, app::MatchCollection*, Matches_2, (app::Regex * this_ptr, app::String* input, int32_t startat))
    IL2CPP_REGISTER_METHOD(0x02585DC0, app::String*, Replace_1, (app::String * input, app::String* pattern, app::String* replacement))
    IL2CPP_REGISTER_METHOD(0x02585EA0, app::String*, Replace_2, (app::String * input, app::String* pattern, app::String* replacement, app::RegexOptions__Enum options, app::TimeSpan match_timeout))
    IL2CPP_REGISTER_METHOD(0x025860F0, app::String*, Replace_3, (app::Regex * this_ptr, app::String* input, app::String* replacement))
    IL2CPP_REGISTER_METHOD(0x025861E0, app::String*, Replace_4, (app::Regex * this_ptr, app::String* input, app::String* replacement, int32_t count, int32_t startat))
    IL2CPP_REGISTER_METHOD(0x02586470, void, InitializeReferences, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025867F0, app::Match*, Run, (app::Regex * this_ptr, bool quick, int32_t prevlen, app::String* input, int32_t beginning, int32_t length, int32_t startat))
    IL2CPP_REGISTER_METHOD(0x02586D20, app::CachedCodeEntry*, LookupCachedAndUpdate, (app::String * key))
    IL2CPP_REGISTER_METHOD(0x02587060, app::CachedCodeEntry*, CacheCode, (app::Regex * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x025853C0, bool, UseOptionR, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02587680, bool, UseOptionInvariant, (app::Regex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02587690, void, cctor, ())
} // namespace app::classes::System::Text::RegularExpressions::Regex

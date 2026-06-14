#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/Match.h>
#include <Modloader/app/structs/Regex.h>
#include <Modloader/app/structs/RegexNode.h>
#include <Modloader/app/structs/RegexReplacement.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::System::Text::RegularExpressions::RegexReplacement {
    IL2CPP_REGISTER_METHOD(0x02A76300, void, ctor, app::RegexReplacement* this_ptr, app::String* rep, app::RegexNode* concat, app::Hashtable* _caps)
    IL2CPP_REGISTER_METHOD(0x02A76AD0, void, ReplacementImpl, app::RegexReplacement* this_ptr, app::StringBuilder* sb, app::Match* match)
    IL2CPP_REGISTER_METHOD(0x02A76D80, void, ReplacementImplRTL, app::RegexReplacement* this_ptr, app::List_1_System_String_* al, app::Match* match)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Pattern, app::RegexReplacement* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02A77030,
        app::String*,
        Replace,
        app::RegexReplacement* this_ptr,
        app::Regex* regex,
        app::String* input,
        int32_t count,
        int32_t startat
    )
} // namespace app::classes::System::Text::RegularExpressions::RegexReplacement

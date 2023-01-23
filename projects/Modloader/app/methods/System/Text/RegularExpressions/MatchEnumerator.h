#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MatchEnumerator.h>
#include <Modloader/app/structs/MatchCollection.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Text::RegularExpressions::MatchEnumerator {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::MatchEnumerator * this_ptr, app::MatchCollection* matchcoll))
    IL2CPP_REGISTER_METHOD(0x02583F40, bool, MoveNext, (app::MatchEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02583F90, app::Object*, get_Current, (app::MatchEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770358, MatchEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02584060, void, Reset, (app::MatchEnumerator * this_ptr))
} // namespace app::classes::System::Text::RegularExpressions::MatchEnumerator

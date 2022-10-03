#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::RegularExpressions::MatchCollection {
    IL2CPP_REGISTER_METHOD(0x02583680, void, ctor_1, (app::MatchCollection * this_ptr, app::Regex* regex, app::String* input, int32_t beginning, int32_t length, int32_t startat))
    IL2CPP_REGISTER_METHODINFO(0x047230B8, MatchCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02583870, app::Match*, GetMatch, (app::MatchCollection * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x02583A30, int32_t, get_Count, (app::MatchCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, (app::MatchCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::MatchCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02583B20, app::Match*, get_Item, (app::MatchCollection * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHODINFO(0x0475EAF8, MatchCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02583BF0, void, CopyTo, (app::MatchCollection * this_ptr, app::Array* array, int32_t array_index))
    IL2CPP_REGISTER_METHODINFO(0x04710BE0, MatchCollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02583D50, app::IEnumerator*, GetEnumerator, (app::MatchCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02583E90, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02583F10, void, ctor_2, (app::MatchCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752018, MatchCollection__ctor_1__MethodInfo)
} // namespace app::classes::System::Text::RegularExpressions::MatchCollection

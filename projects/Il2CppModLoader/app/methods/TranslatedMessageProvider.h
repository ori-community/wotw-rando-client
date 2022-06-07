#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TranslatedMessageProvider {
    IL2CPP_REGISTER_METHOD(0x00B0A900, app::IEnumerable_1_MessageDescriptor_ *, GetMessages, (app::TranslatedMessageProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsPlaying, ())
    IL2CPP_REGISTER_METHOD(0x00B0AA90, void, ctor, (app::TranslatedMessageProvider * this_ptr))
}

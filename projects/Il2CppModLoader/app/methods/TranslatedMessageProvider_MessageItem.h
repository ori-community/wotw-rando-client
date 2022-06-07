#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TranslatedMessageProvider_MessageItem {
    IL2CPP_REGISTER_METHOD(0x00B0B310, app::String *, Message, (app::TranslatedMessageProvider_MessageItem * this_ptr, app::Language__Enum language))
    IL2CPP_REGISTER_METHOD(0x00B0B410, void, OnValidate, (app::TranslatedMessageProvider_MessageItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0B4B0, app::MessageDescriptor, GetDescriptor, (app::TranslatedMessageProvider_MessageItem * this_ptr, app::Language__Enum language))
    IL2CPP_REGISTER_METHOD(0x00B0B6D0, bool, ShouldShowSoundProvider, (app::TranslatedMessageProvider_MessageItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TranslatedMessageProvider_MessageItem * this_ptr))
}

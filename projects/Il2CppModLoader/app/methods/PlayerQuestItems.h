#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayerQuestItems {
    IL2CPP_REGISTER_METHOD(0x014287B0, void, AddItem, (app::PlayerQuestItems * this_ptr, app::QuestItemType__Enum item))
    IL2CPP_REGISTER_METHOD(0x01428880, bool, HasItem, (app::PlayerQuestItems * this_ptr, app::QuestItemType__Enum item))
    IL2CPP_REGISTER_METHOD(0x01428950, void, SetReferenceToSein, (app::PlayerQuestItems * this_ptr, app::SeinCharacter * sein))
    IL2CPP_REGISTER_METHOD(0x01428970, void, ctor, (app::PlayerQuestItems * this_ptr))
}

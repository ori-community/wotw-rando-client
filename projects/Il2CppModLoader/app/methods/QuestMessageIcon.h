#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::QuestMessageIcon {
    IL2CPP_REGISTER_METHOD(0x00E8B100, void, SetQuest, (app::QuestMessageIcon * this_ptr, app::Quest * quest, app::QuestMessageIcon_QuestMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x00E8B460, void, SetIcon, (app::QuestMessageIcon * this_ptr, app::Texture2D * icon))
    IL2CPP_REGISTER_METHOD(0x00E8B510, void, SetName, (app::QuestMessageIcon * this_ptr, app::MessageProvider * name))
    IL2CPP_REGISTER_METHOD(0x00E8B5D0, void, SetDescription_1, (app::QuestMessageIcon * this_ptr, app::MessageProvider * description))
    IL2CPP_REGISTER_METHOD(0x00E8B6C0, void, SetDescription_2, (app::QuestMessageIcon * this_ptr, app::MessageDescriptor descriptor))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::QuestMessageIcon * this_ptr))
}

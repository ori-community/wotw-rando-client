#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_UI_MessageBox_HideAction_.h>
#include <Modloader/app/structs/EmotionType__Enum.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Language__Enum.h>
#include <Modloader/app/structs/MessageBox_1.h>
#include <Modloader/app/structs/MessageBox_HideAction__Enum_1.h>
#include <Modloader/app/structs/MessageDescriptor.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::UI::MessageBox {
    IL2CPP_REGISTER_METHOD(0x00D26F90, app::HashSet_1_Moon_ISuspendable_*, GetSuspendables, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D271F0, void, add_OnMessageScreenHide, app::MessageBox_1* this_ptr, app::Action_1_Moon_UI_MessageBox_HideAction_* value)
    IL2CPP_REGISTER_METHOD(0x00D272E0, void, remove_OnMessageScreenHide, app::MessageBox_1* this_ptr, app::Action_1_Moon_UI_MessageBox_HideAction_* value)
    IL2CPP_REGISTER_METHOD(0x00D273D0, void, add_OnNextMessage, app::MessageBox_1* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00D274C0, void, remove_OnNextMessage, app::MessageBox_1* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00D275B0, void, OverrideLanuage, app::MessageBox_1* this_ptr, app::Language__Enum language)
    IL2CPP_REGISTER_METHOD(0x00D275C0, void, SetAvatar, app::MessageBox_1* this_ptr, app::GameObject* avatar_prefab)
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, SetAvatarArray, app::MessageBox_1* this_ptr, app::GameObject__Array* avatar_prefabs)
    IL2CPP_REGISTER_METHOD(0x00D27B70, void, HideMessageScreen, app::MessageBox_1* this_ptr, app::MessageBox_HideAction__Enum_1 action)
    IL2CPP_REGISTER_METHOD(0x00D27C30, void, Awake, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D27ED0, void, OnDestroy, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28170, void, Start, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28260, void, Update, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D282C0, void, RemoveMessageFade, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D282D0, void, SetMessageFade, app::MessageBox_1* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x00D28530, void, SetMessage, app::MessageBox_1* this_ptr, app::MessageDescriptor message_descriptor)
    IL2CPP_REGISTER_METHOD(0x00D285C0, void, RefreshText, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, OnEnable, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28C20, void, SetMessageProvider, app::MessageBox_1* this_ptr, app::MessageProvider* message_provider)
    IL2CPP_REGISTER_METHOD(0x00D28C30, int32_t, get_MessageCount, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28C50, void, SetWaitDuration, app::MessageBox_1* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::String*, get_CurrentMessage, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFBD0, app::EmotionType__Enum, get_CurrentEmotion, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B0220, app::Event_1*, get_CurrentMessageSound, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28C70, void, FinishWriting, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28D80, bool, get_IsLastMessage, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28DA0, bool, get_FinishedWriting, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D28EB0, void, NextMessage, app::MessageBox_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D29030, void, ctor, app::MessageBox_1* this_ptr)
} // namespace app::classes::Moon::UI::MessageBox

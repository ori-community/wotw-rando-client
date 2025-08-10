#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/LoremasterScreen.h>
#include <Modloader/app/structs/LoremasterUISlot.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/ReplaySetting__Array.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::LoremasterScreen {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanInterruptTab, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::MenuTabBackground__Enum, get_BackgroundMode, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedsExperienceUI, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NeedOreUI, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F1920, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x009F19A0, app::CleverMenuItemSelectionManager*, get_Navigation, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F19C0, app::LoremasterUISlot*, get_SelectedItem, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F1AB0, void, Awake, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F1BD0, void, OnDestroy, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F1D90, void, Hide, app::LoremasterScreen* this_ptr, bool change)
    IL2CPP_REGISTER_METHOD(0x009F1E80, void, ShowImmediate, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F1EF0, void, HideImmediate, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F1F30, void, Show, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F20A0, void, OnBackPressed, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F22A0, void, PopulateItems_1, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F22B0, void, PopulateItems_2, app::LoremasterScreen* this_ptr, app::ReplaySetting__Array* replay_settings)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FA30, bool, get_IsSuspended, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_IsSuspended, app::LoremasterScreen* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00653FB0, app::SuspendableMask__Enum, get_Mask, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F2460, void, set_Mask, app::LoremasterScreen* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x009F2520, void, OnPostTimeSlicedEnable, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F2630, void, OnInstantiate, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F2AF0, void, FixedUpdate, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F2BD0, void, UpdateLabel, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F2F30, bool, IsSelectedReplayUnlocked, app::LoremasterScreen* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009F3070, void, ctor, app::LoremasterScreen* this_ptr)
} // namespace app::classes::LoremasterScreen

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/MemoryUISlot.h>
#include <Modloader/app/structs/RaceMenuScreenMemoriesPage.h>
#include <Modloader/app/structs/ReplaySetting__Array.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::RaceMenuScreenMemoriesPage {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0070D380, app::CleverMenuItemSelectionManager*, get_Navigation, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070D450, app::MemoryUISlot*, get_SelectedItem, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070D540, void, Awake, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070D5B0, void, OnDestroy, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070D7A0, void, OnEnable, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070D9E0, void, OnBackPressed, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070DAD0, void, OnNavigate, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070DD00, void, PopulateItems_1, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070DD10, void, PopulateItems_2, (app::RaceMenuScreenMemoriesPage * this_ptr, app::ReplaySetting__Array* replay_settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, (app::RaceMenuScreenMemoriesPage * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0070DEC0, app::SuspendableMask__Enum, get_Mask, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070DED0, void, set_Mask, (app::RaceMenuScreenMemoriesPage * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostTimeSlicedEnable, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070DF90, void, OnInstantiate, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070E2E0, void, FixedUpdate, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070E3C0, void, UpdateLabel, (app::RaceMenuScreenMemoriesPage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0070E700, void, ctor, (app::RaceMenuScreenMemoriesPage * this_ptr))
} // namespace app::classes::RaceMenuScreenMemoriesPage

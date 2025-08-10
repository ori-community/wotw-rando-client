#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateAreaMapInformation_MapTrailEntry.h>
#include <Modloader/app/structs/Stack_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_.h>

namespace app::classes::System::Collections::Generic::Stack_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF7F90,
        app::PlayerUberStateAreaMapInformation_MapTrailEntry*,
        Pop,
        app::Stack_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF8030,
        void,
        Push,
        app::Stack_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_* this_ptr,
        app::PlayerUberStateAreaMapInformation_MapTrailEntry* item
    )
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Stack_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_Moon_uberSerializationWisp_PlayerUberStateAreaMapInformation_MapTrailEntry_

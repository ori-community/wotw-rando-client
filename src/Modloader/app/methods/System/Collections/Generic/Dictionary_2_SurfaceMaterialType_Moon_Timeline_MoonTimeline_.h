#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* this_ptr,
        app::SurfaceMaterialType__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02C35530,
        app::MoonTimeline*,
        get_Item,
        app::Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* this_ptr,
        app::SurfaceMaterialType__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* this_ptr,
        app::SurfaceMaterialType__Enum key,
        app::MoonTimeline* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_SurfaceMaterialType_Moon_Timeline_MoonTimeline_*,
        get_Keys,
        app::Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SurfaceMaterialType_Moon_Timeline_MoonTimeline_

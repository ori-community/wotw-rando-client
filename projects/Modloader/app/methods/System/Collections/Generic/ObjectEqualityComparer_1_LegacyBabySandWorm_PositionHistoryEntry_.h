#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry.h>
#include <Modloader/app/structs/LegacyBabySandWorm_PositionHistoryEntry__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0840,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* this_ptr,
        app::LegacyBabySandWorm_PositionHistoryEntry x,
        app::LegacyBabySandWorm_PositionHistoryEntry y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* this_ptr,
        app::LegacyBabySandWorm_PositionHistoryEntry obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0960,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* this_ptr,
        app::LegacyBabySandWorm_PositionHistoryEntry__Array* array,
        app::LegacyBabySandWorm_PositionHistoryEntry value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0AD0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* this_ptr,
        app::LegacyBabySandWorm_PositionHistoryEntry__Array* array,
        app::LegacyBabySandWorm_PositionHistoryEntry value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_LegacyBabySandWorm_PositionHistoryEntry_

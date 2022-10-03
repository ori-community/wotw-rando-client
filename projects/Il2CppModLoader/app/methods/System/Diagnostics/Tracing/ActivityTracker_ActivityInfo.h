#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo {
    IL2CPP_REGISTER_METHOD(0x01746930, void, ctor, (app::ActivityTracker_ActivityInfo * this_ptr, app::String* name, int64_t unique_id, app::ActivityTracker_ActivityInfo* creator, app::Guid activity_i_d_to_restore, app::EventActivityOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01746A40, app::Guid, get_ActivityId, (app::ActivityTracker_ActivityInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01746A50, app::String*, Path, (app::ActivityTracker_ActivityInfo * activity_info))
    IL2CPP_REGISTER_METHOD(0x01746B20, app::String*, ToString, (app::ActivityTracker_ActivityInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01746DA0, app::String*, LiveActivities, (app::ActivityTracker_ActivityInfo * list))
    IL2CPP_REGISTER_METHOD(0x01746E70, bool, CanBeOrphan, (app::ActivityTracker_ActivityInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01746E80, void, CreateActivityPathGuid, (app::ActivityTracker_ActivityInfo * this_ptr, app::Guid* id_ret, int32_t* activity_path_guid_offset))
    IL2CPP_REGISTER_METHOD(0x01746F70, void, CreateOverflowGuid, (app::ActivityTracker_ActivityInfo * this_ptr, app::Guid* out_ptr))
    IL2CPP_REGISTER_METHOD(0x01746FF0, int32_t, AddIdToGuid, (app::Guid * out_ptr, int32_t where_to_add_id, uint32_t id, bool overflow))
    IL2CPP_REGISTER_METHOD(0x01747140, void, WriteNibble, (app::uint8_t * *ptr, uint8_t* end_ptr, uint32_t value))
} // namespace app::classes::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CVRChaperoneSetup.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EChaperoneConfigFile__Enum.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/HmdQuad_t.h>
#include <Modloader/app/structs/HmdQuad_t__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup {
    IL2CPP_REGISTER_METHOD(0x016774C0, void, ctor, (app::CVRChaperoneSetup * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x01677630, bool, CommitWorkingCopy, (app::CVRChaperoneSetup * this_ptr, app::EChaperoneConfigFile__Enum config_file))
    IL2CPP_REGISTER_METHOD(0x00B8BEC0, void, RevertWorkingCopy, (app::CVRChaperoneSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01677650, bool, GetWorkingPlayAreaSize, (app::CVRChaperoneSetup * this_ptr, float* p_size_x, float* p_size_z))
    IL2CPP_REGISTER_METHOD(0x01677680, bool, GetWorkingPlayAreaRect, (app::CVRChaperoneSetup * this_ptr, app::HmdQuad_t* rect))
    IL2CPP_REGISTER_METHOD(0x016776A0, bool, GetWorkingCollisionBoundsInfo, (app::CVRChaperoneSetup * this_ptr, app::HmdQuad_t__Array** p_quads_buffer))
    IL2CPP_REGISTER_METHOD(0x01677780, bool, GetLiveCollisionBoundsInfo, (app::CVRChaperoneSetup * this_ptr, app::HmdQuad_t__Array** p_quads_buffer))
    IL2CPP_REGISTER_METHOD(0x01677860, bool, GetWorkingSeatedZeroPoseToRawTrackingPose, (app::CVRChaperoneSetup * this_ptr, app::HmdMatrix34_t* pmat_seated_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x01677880, bool, GetWorkingStandingZeroPoseToRawTrackingPose, (app::CVRChaperoneSetup * this_ptr, app::HmdMatrix34_t* pmat_standing_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x016778A0, void, SetWorkingPlayAreaSize, (app::CVRChaperoneSetup * this_ptr, float size_x, float size_z))
    IL2CPP_REGISTER_METHOD(0x016778C0, void, SetWorkingCollisionBoundsInfo, (app::CVRChaperoneSetup * this_ptr, app::HmdQuad_t__Array* p_quads_buffer))
    IL2CPP_REGISTER_METHOD(0x016778F0, void, SetWorkingSeatedZeroPoseToRawTrackingPose, (app::CVRChaperoneSetup * this_ptr, app::HmdMatrix34_t* p_mat_seated_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x01677910, void, SetWorkingStandingZeroPoseToRawTrackingPose, (app::CVRChaperoneSetup * this_ptr, app::HmdMatrix34_t* p_mat_standing_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x01677930, void, ReloadFromDisk, (app::CVRChaperoneSetup * this_ptr, app::EChaperoneConfigFile__Enum config_file))
    IL2CPP_REGISTER_METHOD(0x01677950, bool, GetLiveSeatedZeroPoseToRawTrackingPose, (app::CVRChaperoneSetup * this_ptr, app::HmdMatrix34_t* pmat_seated_zero_pose_to_raw_tracking_pose))
    IL2CPP_REGISTER_METHOD(0x01677970, void, SetWorkingCollisionBoundsTagsInfo, (app::CVRChaperoneSetup * this_ptr, app::Byte__Array* p_tags_buffer))
    IL2CPP_REGISTER_METHOD(0x016779B0, bool, GetLiveCollisionBoundsTagsInfo, (app::CVRChaperoneSetup * this_ptr, app::Byte__Array** p_tags_buffer))
    IL2CPP_REGISTER_METHOD(0x01677A90, bool, SetWorkingPhysicalBoundsInfo, (app::CVRChaperoneSetup * this_ptr, app::HmdQuad_t__Array* p_quads_buffer))
    IL2CPP_REGISTER_METHOD(0x01677AD0, bool, GetLivePhysicalBoundsInfo, (app::CVRChaperoneSetup * this_ptr, app::HmdQuad_t__Array** p_quads_buffer))
    IL2CPP_REGISTER_METHOD(0x01677BB0, bool, ExportLiveToBuffer, (app::CVRChaperoneSetup * this_ptr, app::StringBuilder* p_buffer, uint32_t* pn_buffer_length))
    IL2CPP_REGISTER_METHOD(0x01677BE0, bool, ImportFromBufferToWorking, (app::CVRChaperoneSetup * this_ptr, app::String* p_buffer, uint32_t n_import_flags))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRChaperoneSetup

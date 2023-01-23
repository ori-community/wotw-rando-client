#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CVRApplications.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/AppOverrideKeys_t__Array.h>
#include <Modloader/app/structs/EVRApplicationProperty__Enum.h>
#include <Modloader/app/structs/EVRApplicationTransitionState__Enum.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRApplications {
    IL2CPP_REGISTER_METHOD(0x01676A30, void, ctor, (app::CVRApplications * this_ptr, void* p_interface))
    IL2CPP_REGISTER_METHOD(0x01676BD0, app::EVRApplicationError__Enum, AddApplicationManifest, (app::CVRApplications * this_ptr, app::String* pch_application_manifest_full_path, bool b_temporary))
    IL2CPP_REGISTER_METHOD(0x01676BF0, app::EVRApplicationError__Enum, RemoveApplicationManifest, (app::CVRApplications * this_ptr, app::String* pch_application_manifest_full_path))
    IL2CPP_REGISTER_METHOD(0x01676C10, bool, IsApplicationInstalled, (app::CVRApplications * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01676C30, uint32_t, GetApplicationCount, (app::CVRApplications * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01676C50, app::EVRApplicationError__Enum, GetApplicationKeyByIndex, (app::CVRApplications * this_ptr, uint32_t un_application_index, app::StringBuilder* pch_app_key_buffer, uint32_t un_app_key_buffer_len))
    IL2CPP_REGISTER_METHOD(0x01676C80, app::EVRApplicationError__Enum, GetApplicationKeyByProcessId, (app::CVRApplications * this_ptr, uint32_t un_process_id, app::String* pch_app_key_buffer, uint32_t un_app_key_buffer_len))
    IL2CPP_REGISTER_METHOD(0x01676CB0, app::EVRApplicationError__Enum, LaunchApplication, (app::CVRApplications * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01676CD0, app::EVRApplicationError__Enum, LaunchTemplateApplication, (app::CVRApplications * this_ptr, app::String* pch_template_app_key, app::String* pch_new_app_key, app::AppOverrideKeys_t__Array* p_keys))
    IL2CPP_REGISTER_METHOD(0x01676D10, app::EVRApplicationError__Enum, LaunchApplicationFromMimeType, (app::CVRApplications * this_ptr, app::String* pch_mime_type, app::String* pch_args))
    IL2CPP_REGISTER_METHOD(0x01676D30, app::EVRApplicationError__Enum, LaunchDashboardOverlay, (app::CVRApplications * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01676D50, bool, CancelApplicationLaunch, (app::CVRApplications * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01676D70, app::EVRApplicationError__Enum, IdentifyApplication, (app::CVRApplications * this_ptr, uint32_t un_process_id, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01676D90, uint32_t, GetApplicationProcessId, (app::CVRApplications * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01676DB0, app::String*, GetApplicationsErrorNameFromEnum, (app::CVRApplications * this_ptr, app::EVRApplicationError__Enum error))
    IL2CPP_REGISTER_METHOD(0x01676E90, uint32_t, GetApplicationPropertyString, (app::CVRApplications * this_ptr, app::String* pch_app_key, app::EVRApplicationProperty__Enum e_property, app::StringBuilder* pch_property_value_buffer, uint32_t un_property_value_buffer_len, app::EVRApplicationError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x01676EC0, bool, GetApplicationPropertyBool, (app::CVRApplications * this_ptr, app::String* pch_app_key, app::EVRApplicationProperty__Enum e_property, app::EVRApplicationError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x01676EF0, uint64_t, GetApplicationPropertyUint64, (app::CVRApplications * this_ptr, app::String* pch_app_key, app::EVRApplicationProperty__Enum e_property, app::EVRApplicationError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x01676F20, app::EVRApplicationError__Enum, SetApplicationAutoLaunch, (app::CVRApplications * this_ptr, app::String* pch_app_key, bool b_auto_launch))
    IL2CPP_REGISTER_METHOD(0x01676F50, bool, GetApplicationAutoLaunch, (app::CVRApplications * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01676F80, app::EVRApplicationError__Enum, SetDefaultApplicationForMimeType, (app::CVRApplications * this_ptr, app::String* pch_app_key, app::String* pch_mime_type))
    IL2CPP_REGISTER_METHOD(0x01676FB0, bool, GetDefaultApplicationForMimeType, (app::CVRApplications * this_ptr, app::String* pch_mime_type, app::String* pch_app_key_buffer, uint32_t un_app_key_buffer_len))
    IL2CPP_REGISTER_METHOD(0x01676FE0, bool, GetApplicationSupportedMimeTypes, (app::CVRApplications * this_ptr, app::String* pch_app_key, app::String* pch_mime_types_buffer, uint32_t un_mime_types_buffer))
    IL2CPP_REGISTER_METHOD(0x01677010, uint32_t, GetApplicationsThatSupportMimeType, (app::CVRApplications * this_ptr, app::String* pch_mime_type, app::String* pch_app_keys_that_support_buffer, uint32_t un_app_keys_that_support_buffer))
    IL2CPP_REGISTER_METHOD(0x01677040, uint32_t, GetApplicationLaunchArguments, (app::CVRApplications * this_ptr, uint32_t un_handle, app::String* pch_args, uint32_t un_args))
    IL2CPP_REGISTER_METHOD(0x01677070, app::EVRApplicationError__Enum, GetStartingApplication, (app::CVRApplications * this_ptr, app::String* pch_app_key_buffer, uint32_t un_app_key_buffer_len))
    IL2CPP_REGISTER_METHOD(0x016770A0, app::EVRApplicationTransitionState__Enum, GetTransitionState, (app::CVRApplications * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016770D0, app::EVRApplicationError__Enum, PerformApplicationPrelaunchCheck, (app::CVRApplications * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x01677100, app::String*, GetApplicationsTransitionStateNameFromEnum, (app::CVRApplications * this_ptr, app::EVRApplicationTransitionState__Enum state))
    IL2CPP_REGISTER_METHOD(0x016771F0, bool, IsQuitUserPromptRequested, (app::CVRApplications * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01677220, app::EVRApplicationError__Enum, LaunchInternalProcess, (app::CVRApplications * this_ptr, app::String* pch_binary_path, app::String* pch_arguments, app::String* pch_working_directory))
    IL2CPP_REGISTER_METHOD(0x01677250, uint32_t, GetCurrentSceneProcessId, (app::CVRApplications * this_ptr))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRApplications

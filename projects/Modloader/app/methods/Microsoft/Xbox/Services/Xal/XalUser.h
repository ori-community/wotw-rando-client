#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XalUser_1.h>
#include <Modloader/app/structs/XalUserState__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XalAgeGroup__Enum.h>
#include <Modloader/app/structs/EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/XalPrivilegeCheckResult.h>
#include <Modloader/app/structs/XalPrivilege__Enum.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureArgs.h>
#include <Modloader/app/structs/Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_.h>
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/Task_1_System_Byte_.h>
#include <Modloader/app/structs/XalGamerPictureSize__Enum.h>
#include <Modloader/app/structs/XalUser_InternalXalUserLocalId.h>
#include <Modloader/app/structs/XalUserChangeType__Enum.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/void.h>
#include <Modloader/app/structs/XalPrivilegeCheckDenyReasons__Enum.h>
#include <Modloader/app/structs/XalUser_InternalXalUserGetTokenAndSignatureArgs.h>
#include <Modloader/app/structs/XalHttpHeader__Array.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/XalUser_XalUserChangeEventHandler.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalUser {
    IL2CPP_REGISTER_METHOD(0x0143F300, uint64_t, get_Id, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0143F440, bool, get_UserIsGuest, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0143F4E0, app::XalUserState__Enum, get_UserState, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0143F620, app::String*, get_Gamertag, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0143F880, app::XalAgeGroup__Enum, get_AgeGroup, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0143F9C0, void, add_UserChanged, (app::XalUser_1 * this_ptr, app::EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_* value))
    IL2CPP_REGISTER_METHOD(0x0143FAB0, void, remove_UserChanged, (app::XalUser_1 * this_ptr, app::EventHandler_1_Microsoft_Xbox_Services_Xal_UserChangeEventArgs_* value))
    IL2CPP_REGISTER_METHOD(0x0143FBA0, void, ctor_1, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0143FC40, void, ctor_2, (app::XalUser_1 * this_ptr, void* async_queue, void* user_handle))
    IL2CPP_REGISTER_METHOD(0x0143FE90, void, Dispose, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01440060, bool, SignOutIsPresent, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014400F0, app::Task*, SignOutAsync, (app::XalUser_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014405C0, app::XalPrivilegeCheckResult, CheckPrivilege, (app::XalUser_1 * this_ptr, app::XalPrivilege__Enum privilege))
    IL2CPP_REGISTER_METHOD(0x01440740, void, GetTokenAndSignatureSilentlyAsync, (app::XalUser_1 * this_ptr, app::XalUserGetTokenAndSignatureArgs args, app::Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_* on_complete, app::Action_1_Int32_* on_error))
    IL2CPP_REGISTER_METHOD(0x01440AB0, app::Task*, ResolveIssueWithUiAsync, (app::XalUser_1 * this_ptr, app::String* url))
    IL2CPP_REGISTER_METHOD(0x01441210, app::Task_1_System_Byte_*, GetGamerPictureAsync, (app::XalUser_1 * this_ptr, app::XalGamerPictureSize__Enum picture_size))
    IL2CPP_REGISTER_METHOD(0x014416E0, void, OnUserChanged, (void* context, app::XalUser_InternalXalUserLocalId user_id, app::XalUserChangeType__Enum change))
    IL2CPP_REGISTER_METHODINFO(0x04783428, XalUser_1_OnUserChanged__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01440060, bool, XalWrapper_XalSignOutUserAsyncIsPresent, ())
    IL2CPP_REGISTER_METHOD(0x01441950, int32_t, XalWrapper_XalSignOutUserAsync, (void* async, void* user))
    IL2CPP_REGISTER_METHOD(0x01441A00, int32_t, XalWrapper_XalSignOutUserResult, (void* async))
    IL2CPP_REGISTER_METHOD(0x01441AA0, int32_t, XalWrapper_XalUserGetId, (void* user, uint64_t* id))
    IL2CPP_REGISTER_METHOD(0x01441B50, bool, XalWrapper_XalUserIsGuest, (void* user))
    IL2CPP_REGISTER_METHOD(0x01441BF0, int32_t, XalWrapper_XalUserGetState, (void* user, app::XalUserState__Enum* state))
    IL2CPP_REGISTER_METHOD(0x01441CA0, void*, XalWrapper_XalUserGetGamertagSize, (void* user))
    IL2CPP_REGISTER_METHOD(0x01441D40, int32_t, XalWrapper_XalUserGetGamertag, (void* user, void* gamertag_size, app::StringBuilder* gamertag, app::void** gamertag_size_used))
    IL2CPP_REGISTER_METHOD(0x01441F50, int32_t, XalWrapper_XalUserGetGamerPictureAsync, (void* async, void* user, app::XalGamerPictureSize__Enum picture_size))
    IL2CPP_REGISTER_METHOD(0x01442000, int32_t, XalWrapper_XalUserGetGamerPictureResultSize, (void* async, app::void** buffer_size))
    IL2CPP_REGISTER_METHOD(0x014420B0, int32_t, XalWrapper_XalUserGetGamerPictureResult, (void* async, void* buffer_size, void* buffer))
    IL2CPP_REGISTER_METHOD(0x01442160, int32_t, XalWrapper_XalUserGetAgeGroup, (void* user, app::XalAgeGroup__Enum* age_group))
    IL2CPP_REGISTER_METHOD(0x01442210, int32_t, XalWrapper_XalUserCheckPrivilege, (void* user, app::XalPrivilege__Enum privilege, bool* has_privilege, app::XalPrivilegeCheckDenyReasons__Enum* reasons))
    IL2CPP_REGISTER_METHOD(0x014422F0, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyAsync, (void* async, void* user, app::XalUser_InternalXalUserGetTokenAndSignatureArgs* args, uint32_t header_count, app::XalHttpHeader__Array* headers, void* body_count, app::Byte__Array* body))
    IL2CPP_REGISTER_METHOD(0x014425E0, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyResultSize, (void* async, app::void** buffer_size))
    IL2CPP_REGISTER_METHOD(0x01442690, int32_t, XalWrapper_XalUserGetTokenAndSignatureSilentlyResult, (void* async, void* buffer_size, void* buffer, app::void** result, app::void** buffer_used))
    IL2CPP_REGISTER_METHOD(0x01442760, int32_t, XalWrapper_XalUserResolveIssueWithUiAsync, (void* async, void* user, app::String* url))
    IL2CPP_REGISTER_METHOD(0x01442900, int32_t, XalWrapper_XalUserResolveIssueWithUiResult, (void* async))
    IL2CPP_REGISTER_METHOD(0x014429A0, int32_t, XalWrapper_XalUserRegisterChangeEventHandler, (void* queue, void* context, app::XalUser_XalUserChangeEventHandler* handler, uint64_t* token))
    IL2CPP_REGISTER_METHOD(0x01442A70, void, XalWrapper_XalUserUnregisterChangeEventHandler, (uint64_t token))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::XalUser

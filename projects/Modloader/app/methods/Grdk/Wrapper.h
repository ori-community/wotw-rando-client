#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Byte_.h>
#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/Action_1_XGamingRuntime_XblAchievement_.h>
#include <Modloader/app/structs/Action_2_String_Int32_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Wrapper.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle.h>
#include <Modloader/app/structs/XUserChangeEvent__Enum.h>
#include <Modloader/app/structs/XUserGamerPictureSize__Enum.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureOptions__Enum.h>
#include <Modloader/app/structs/XUserHandle.h>
#include <Modloader/app/structs/XUserLocalId.h>
#include <Modloader/app/structs/XblAchievementOrderBy__Enum.h>
#include <Modloader/app/structs/XblAchievementType__Enum.h>

namespace app::classes::Grdk::Wrapper {
    IL2CPP_REGISTER_METHOD(0x01083CD0, bool, get_InitializedOk, )
    IL2CPP_REGISTER_METHOD(0x01083D70, void, set_InitializedOk, bool value)
    IL2CPP_REGISTER_METHOD(0x01083E20, bool, get_Initialized, )
    IL2CPP_REGISTER_METHOD(0x01083EC0, void, set_Initialized, bool value)
    IL2CPP_REGISTER_METHOD(0x01083F70, void, add_SavesUpdates, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x010840B0, void, remove_SavesUpdates, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x010841F0, void, SetSignedOutListener, app::Action* action)
    IL2CPP_REGISTER_METHOD(0x010842A0, void, ToSupressSavesUpdatesNotUsed, )
    IL2CPP_REGISTER_METHOD(0x01084350, bool, get_SavesReady, )
    IL2CPP_REGISTER_METHOD(0x01084430, bool, get_XBLReady, )
    IL2CPP_REGISTER_METHOD(0x010844E0, bool, get_IsStorageBusy, )
    IL2CPP_REGISTER_METHOD(0x01084640, bool, get_IsDownloadingSaves, )
    IL2CPP_REGISTER_METHOD(0x010846E0, int32_t, get_SaveDataStateVersion, )
    IL2CPP_REGISTER_METHOD(0x01084780, void, set_SaveDataStateVersion, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01084830, void, SetAchievementProgress, app::String* achievement_id, uint32_t progress, app::Action_1_Int32_* uploaded)
    IL2CPP_REGISTER_METHOD(0x01084AE0, bool, IsGRDKCompatible, )
    IL2CPP_REGISTER_METHOD(0x01084CC0, bool, IsGRDKCompatibleInternal, )
    IL2CPP_REGISTER_METHOD(0x01084D50, bool, Success_1, uint32_t hresult)
    IL2CPP_REGISTER_METHOD(0x01084DF0, bool, Success_2, int32_t hresult)
    IL2CPP_REGISTER_METHOD(0x01084E00, bool, Failure_1, uint32_t hresult)
    IL2CPP_REGISTER_METHOD(0x01084EA0, bool, Failure_2, int32_t hresult)
    IL2CPP_REGISTER_METHOD(
        0x01084F40,
        void,
        GetUnlockedAchievements,
        app::XblAchievementType__Enum type,
        bool unlocked_only,
        app::XblAchievementOrderBy__Enum order_by,
        app::Action_1_XGamingRuntime_XblAchievement_* obtained,
        uint32_t skip_items,
        uint32_t max_items
    )
    IL2CPP_REGISTER_METHOD(0x01085210, void, DownloadAllSaves, )
    IL2CPP_REGISTER_METHOD(0x01085740, void, CleanUpDownloadingSaves, )
    IL2CPP_REGISTER_METHOD(0x010857F0, app::String*, GetGamerTag, )
    IL2CPP_REGISTER_METHOD(0x01085980, uint64_t, GetGamerUid, )
    IL2CPP_REGISTER_METHOD(0x01085B10, void, GetGamerPicture, app::XUserGamerPictureSize__Enum size, app::Action_1_Byte_* success)
    IL2CPP_REGISTER_METHOD(
        0x01085DA0,
        void,
        GetTokenAndSignatureAsync,
        app::XUserGetTokenAndSignatureOptions__Enum get_token_and_signature_options,
        app::Action_2_String_Int32_* on_obtained,
        app::Action_1_Int32_* on_failed
    )
    IL2CPP_REGISTER_METHOD(0x01086060, void, CleanupXBL, )
    IL2CPP_REGISTER_METHOD(0x01086300, void, CleanUpSaveSync, )
    IL2CPP_REGISTER_METHOD(0x010865A0, void, SignIn, app::Action* success, app::Action* failed)
    IL2CPP_REGISTER_METHOD(0x01086770, app::String*, GetGRDKSaveGameName, int32_t slot_index, int32_t backup_index)
    IL2CPP_REGISTER_METHOD(0x010869E0, app::Byte__Array*, Load_1, int32_t slot, int32_t backup_slot)
    IL2CPP_REGISTER_METHOD(0x01086A90, app::Byte__Array*, Load_2, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01086BB0, void, Save_1, int32_t slot, int32_t backup_slot, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x01086C70, void, Save_2, app::String* name, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x010872A0, int32_t, OpenSaveHandle, app::String* name, app::XGameSaveUpdateHandle** handle)
    IL2CPP_REGISTER_METHOD(0x01087400, void, CloseSaveHandle, app::XGameSaveUpdateHandle* handle)
    IL2CPP_REGISTER_METHOD(0x010874E0, bool, InitializeRuntime, )
    IL2CPP_REGISTER_METHOD(0x010877D0, void, RegisterUserChangedEvent, )
    IL2CPP_REGISTER_METHOD(0x010879C0, void, InitializeXBL, )
    IL2CPP_REGISTER_METHOD(0x01087D10, void, InitializeSaveSync, )
    IL2CPP_REGISTER_METHOD(0x01087F60, void, FinalizeSignIn, )
    IL2CPP_REGISTER_METHOD(0x01088010, void, SignInFailed, )
    IL2CPP_REGISTER_METHOD(0x010880C0, void, NoDefaultUserShowUI, )
    IL2CPP_REGISTER_METHOD(0x01088240, void, ResolveUserIssueUI, app::XUserHandle* user_handle)
    IL2CPP_REGISTER_METHOD(0x01088430, void, Cleanup, )
    IL2CPP_REGISTER_METHOD(0x01088570, void, CleanUpSavesCache, )
    IL2CPP_REGISTER_METHOD(0x01088630, void, CleanUpUserHandle, )
    IL2CPP_REGISTER_METHOD(0x01088810, void, CleanUpUserChangeToken, )
    IL2CPP_REGISTER_METHOD(0x010889C0, void, UserChanged, app::XUserLocalId userlocalid, app::XUserChangeEvent__Enum eventtype)
    IL2CPP_REGISTER_METHOD(0x01088A80, void, AddUserAsyncResult, int32_t hresult, app::XUserHandle* handle)
    IL2CPP_REGISTER_METHOD(0x01088DD0, bool, HasSave, int32_t slot_index)
    IL2CPP_REGISTER_METHOD(0x01088F40, void, CopySave_1, int32_t from, int32_t to)
    IL2CPP_REGISTER_METHOD(0x01089070, app::Byte__Array*, CopySave_2, int32_t from, app::String* to_name)
    IL2CPP_REGISTER_METHOD(0x01089250, void, DeleteSlot, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01089370, void, Delete, app::String* name)
    IL2CPP_REGISTER_METHOD(0x010898D0, void, CleanUpDelete, )
    IL2CPP_REGISTER_METHOD(0x010899D0, bool, Initialize, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Wrapper* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01089AD0, void, cctor, )
} // namespace app::classes::Grdk::Wrapper

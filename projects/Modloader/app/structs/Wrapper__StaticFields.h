#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Wrapper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Wrapper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wrapper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Wrapper__StaticFields_DEFINED
struct Action;
struct XblContextHandle;
struct XUserHandle;
struct XRegistrationToken;
struct XGameSaveContainerHandle;
struct XGameSaveProviderHandle;
struct XGameSaveUpdateHandle;
struct Dictionary_2_System_String_System_Byte_;
struct Wrapper__StaticFields {
    bool _InitializedOk_k__BackingField;
    bool _Initialized_k__BackingField;
    uint64_t m_userId;
    struct Action* SavesUpdates;
    struct Action* m_signedOutCallback;
    int32_t _SaveDataStateVersion_k__BackingField;
    struct XblContextHandle* m_xblContext;
    struct XUserHandle* m_userHandle;
    struct XRegistrationToken* m_userChangeToken;
    struct Action* m_signInComplete;
    struct Action* m_signInFailed;
    struct XGameSaveContainerHandle* m_blobContainer;
    struct XGameSaveProviderHandle* m_gameSaveProvider;
    bool m_canCheckGRDK;
    struct XGameSaveUpdateHandle* m_deleteUpdateHandle;
    bool m_downloadingSaves;
    struct Dictionary_2_System_String_System_Byte_* m_blobsCache;
    int32_t m_savesInProgress;
};
#endif
#if !defined(IL2CPP_STRUCT_Wrapper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Wrapper__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Byte_.h>
#include <Modloader/app/structs/XGameSaveContainerHandle.h>
#include <Modloader/app/structs/XGameSaveProviderHandle.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle.h>
#include <Modloader/app/structs/XRegistrationToken.h>
#include <Modloader/app/structs/XUserHandle.h>
#include <Modloader/app/structs/XblContextHandle.h>
#endif
#undef IL2CPP_STRUCT_Wrapper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wrapper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Wrapper__StaticFields_FWDDECL)
#include <Modloader/app/structs/Wrapper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Wrapper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

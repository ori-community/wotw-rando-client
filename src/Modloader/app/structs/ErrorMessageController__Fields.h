#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ErrorMessageController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ErrorMessageController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorMessageController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ErrorMessageController__Fields_DEFINED
struct MessageBox;
struct MessageProvider;
struct BaseAnimator;
struct ErrorMessageController__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* Message;
    struct MessageProvider* SaveError;
    struct MessageProvider* CorruptSavesError;
    struct BaseAnimator* AppearAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ErrorMessageController__Fields_FWDDECL)
#define IL2CPP_STRUCT_ErrorMessageController__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_ErrorMessageController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ErrorMessageController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ErrorMessageController__Fields_FWDDECL)
#include <Modloader/app/structs/ErrorMessageController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ErrorMessageController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

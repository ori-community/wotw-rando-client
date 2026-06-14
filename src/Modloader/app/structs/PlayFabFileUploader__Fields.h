#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabFileUploader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabFileUploader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileUploader__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabFileUploader__Fields_DEFINED
struct String;
struct Byte__Array;
struct TaskCompletionSource_1_System_Boolean_;
struct __declspec(align(8)) PlayFabFileUploader__Fields {
    struct String* m_fileName;
    struct Byte__Array* m_data;
    struct String* m_ownerId;
    struct TaskCompletionSource_1_System_Boolean_* m_taskCompletionSource;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabFileUploader__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabFileUploader__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TaskCompletionSource_1_System_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_PlayFabFileUploader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabFileUploader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabFileUploader__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabFileUploader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabFileUploader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Process_ProcInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Process_ProcInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process_ProcInfo_DEFINED)
#define IL2CPP_STRUCT_Process_ProcInfo_DEFINED
struct String__Array;
struct String;
struct Process_ProcInfo {
    void* process_handle;
    int32_t pid;
    struct String__Array* envVariables;
    struct String* UserName;
    struct String* Domain;
    void* Password;
    bool LoadUserProfile;
};
#endif
#if !defined(IL2CPP_STRUCT_Process_ProcInfo_FWDDECL)
#define IL2CPP_STRUCT_Process_ProcInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_Process_ProcInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process_ProcInfo_DEFINED) && !defined(IL2CPP_STRUCT_Process_ProcInfo_FWDDECL)
#include <Modloader/app/structs/Process_ProcInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Process_ProcInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

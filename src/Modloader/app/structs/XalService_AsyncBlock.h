#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalService_AsyncBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalService_AsyncBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_AsyncBlock_DEFINED)
#include <Modloader/app/structs/XalService_AsyncBlock_InternalUse_e_FixedBuffer.h>
#if defined(IL2CPP_STRUCT_XalService_AsyncBlock_InternalUse_e_FixedBuffer_DEFINED)
#define IL2CPP_STRUCT_XalService_AsyncBlock_DEFINED
struct XalService_AsyncCompletionRoutine;
struct XalService_AsyncBlock {
    void* Queue;
    void* Context;
    struct XalService_AsyncCompletionRoutine* Callback;
    struct XalService_AsyncBlock_InternalUse_e_FixedBuffer InternalUse;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalService_AsyncBlock_FWDDECL)
#define IL2CPP_STRUCT_XalService_AsyncBlock_FWDDECL
#include <Modloader/app/structs/XalService_AsyncCompletionRoutine.h>
#endif
#undef IL2CPP_STRUCT_XalService_AsyncBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalService_AsyncBlock_DEFINED) && !defined(IL2CPP_STRUCT_XalService_AsyncBlock_FWDDECL)
#include <Modloader/app/structs/XalService_AsyncBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalService_AsyncBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

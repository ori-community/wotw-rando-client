#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_DEFINED)
#include <Modloader/app/structs/IndexedBranchInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_IndexedBranchInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_DEFINED
struct TryFaultHandler;
struct EnterTryFaultInstruction__Fields {
    struct IndexedBranchInstruction__Fields _;
    struct TryFaultHandler* _tryHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_FWDDECL
#include <Modloader/app/structs/TryFaultHandler.h>
#endif
#undef IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/EnterTryFaultInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterTryFaultInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

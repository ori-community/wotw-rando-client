#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_DEFINED)
#include <Modloader/app/structs/IndexedBranchInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_IndexedBranchInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_DEFINED
struct TryCatchFinallyHandler;
struct EnterTryCatchFinallyInstruction__Fields {
    struct IndexedBranchInstruction__Fields _;
    bool _hasFinally;
    struct TryCatchFinallyHandler* _tryHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_FWDDECL
#include <Modloader/app/structs/TryCatchFinallyHandler.h>
#endif
#undef IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_FWDDECL)
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

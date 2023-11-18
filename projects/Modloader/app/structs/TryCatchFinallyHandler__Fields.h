#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_DEFINED
struct ExceptionHandler__Array;
struct __declspec(align(8)) TryCatchFinallyHandler__Fields {
    int32_t TryStartIndex;
    int32_t TryEndIndex;
    int32_t FinallyStartIndex;
    int32_t FinallyEndIndex;
    int32_t GotoEndTargetIndex;
    struct ExceptionHandler__Array* _handlers;
};
#endif
#if !defined(IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_FWDDECL
#include <Modloader/app/structs/ExceptionHandler__Array.h>
#endif
#undef IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_FWDDECL)
#include <Modloader/app/structs/TryCatchFinallyHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TryCatchFinallyHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

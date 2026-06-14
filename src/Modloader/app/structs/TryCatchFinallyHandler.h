#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TryCatchFinallyHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TryCatchFinallyHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryCatchFinallyHandler_DEFINED)
#include <Modloader/app/structs/TryCatchFinallyHandler__Fields.h>
#if defined(IL2CPP_STRUCT_TryCatchFinallyHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_TryCatchFinallyHandler_DEFINED
struct TryCatchFinallyHandler__Class;
struct TryCatchFinallyHandler {
    struct TryCatchFinallyHandler__Class* klass;
    MonitorData* monitor;
    struct TryCatchFinallyHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TryCatchFinallyHandler_FWDDECL)
#define IL2CPP_STRUCT_TryCatchFinallyHandler_FWDDECL
#include <Modloader/app/structs/TryCatchFinallyHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_TryCatchFinallyHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryCatchFinallyHandler_DEFINED) && !defined(IL2CPP_STRUCT_TryCatchFinallyHandler_FWDDECL)
#include <Modloader/app/structs/TryCatchFinallyHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TryCatchFinallyHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

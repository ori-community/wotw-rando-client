#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Console_InternalCancelHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Console_InternalCancelHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_InternalCancelHandler_DEFINED)
#include <Modloader/app/structs/Console_InternalCancelHandler__Fields.h>
#if defined(IL2CPP_STRUCT_Console_InternalCancelHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_Console_InternalCancelHandler_DEFINED
struct Console_InternalCancelHandler__Class;
struct Console_InternalCancelHandler {
    struct Console_InternalCancelHandler__Class* klass;
    MonitorData* monitor;
    struct Console_InternalCancelHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Console_InternalCancelHandler_FWDDECL)
#define IL2CPP_STRUCT_Console_InternalCancelHandler_FWDDECL
#include <Modloader/app/structs/Console_InternalCancelHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_Console_InternalCancelHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Console_InternalCancelHandler_DEFINED) && !defined(IL2CPP_STRUCT_Console_InternalCancelHandler_FWDDECL)
#include <Modloader/app/structs/Console_InternalCancelHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Console_InternalCancelHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

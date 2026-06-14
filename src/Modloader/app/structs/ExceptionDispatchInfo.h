#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExceptionDispatchInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExceptionDispatchInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionDispatchInfo_DEFINED)
#include <Modloader/app/structs/ExceptionDispatchInfo__Fields.h>
#if defined(IL2CPP_STRUCT_ExceptionDispatchInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ExceptionDispatchInfo_DEFINED
struct ExceptionDispatchInfo__Class;
struct ExceptionDispatchInfo {
    struct ExceptionDispatchInfo__Class* klass;
    MonitorData* monitor;
    struct ExceptionDispatchInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExceptionDispatchInfo_FWDDECL)
#define IL2CPP_STRUCT_ExceptionDispatchInfo_FWDDECL
#include <Modloader/app/structs/ExceptionDispatchInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_ExceptionDispatchInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExceptionDispatchInfo_DEFINED) && !defined(IL2CPP_STRUCT_ExceptionDispatchInfo_FWDDECL)
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExceptionDispatchInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

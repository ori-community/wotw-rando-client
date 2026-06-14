#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMatchResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMatchResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchResult_DEFINED)
#include <Modloader/app/structs/GetMatchResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetMatchResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMatchResult_DEFINED
struct GetMatchResult__Class;
struct GetMatchResult {
    struct GetMatchResult__Class* klass;
    MonitorData* monitor;
    struct GetMatchResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMatchResult_FWDDECL)
#define IL2CPP_STRUCT_GetMatchResult_FWDDECL
#include <Modloader/app/structs/GetMatchResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetMatchResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchResult_DEFINED) && !defined(IL2CPP_STRUCT_GetMatchResult_FWDDECL)
#include <Modloader/app/structs/GetMatchResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMatchResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

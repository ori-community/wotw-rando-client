#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceRequestResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceRequestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRequestResult_DEFINED)
#include <Modloader/app/structs/RaceRequestResult__Fields.h>
#if defined(IL2CPP_STRUCT_RaceRequestResult__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceRequestResult_DEFINED
struct RaceRequestResult__Class;
struct RaceRequestResult {
    struct RaceRequestResult__Class* klass;
    MonitorData* monitor;
    struct RaceRequestResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceRequestResult_FWDDECL)
#define IL2CPP_STRUCT_RaceRequestResult_FWDDECL
#include <Modloader/app/structs/RaceRequestResult__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceRequestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceRequestResult_DEFINED) && !defined(IL2CPP_STRUCT_RaceRequestResult_FWDDECL)
#include <Modloader/app/structs/RaceRequestResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceRequestResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlinkCustomIDResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlinkCustomIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkCustomIDResult_DEFINED)
#include <Modloader/app/structs/UnlinkCustomIDResult__Fields.h>
#if defined(IL2CPP_STRUCT_UnlinkCustomIDResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlinkCustomIDResult_DEFINED
struct UnlinkCustomIDResult__Class;
struct UnlinkCustomIDResult {
    struct UnlinkCustomIDResult__Class* klass;
    MonitorData* monitor;
    struct UnlinkCustomIDResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlinkCustomIDResult_FWDDECL)
#define IL2CPP_STRUCT_UnlinkCustomIDResult_FWDDECL
#include <Modloader/app/structs/UnlinkCustomIDResult__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlinkCustomIDResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkCustomIDResult_DEFINED) && !defined(IL2CPP_STRUCT_UnlinkCustomIDResult_FWDDECL)
#include <Modloader/app/structs/UnlinkCustomIDResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlinkCustomIDResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

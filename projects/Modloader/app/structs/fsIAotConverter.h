#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsIAotConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsIAotConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsIAotConverter_DEFINED)
#define IL2CPP_STRUCT_fsIAotConverter_DEFINED
struct fsIAotConverter__Class;
struct fsIAotConverter {
    struct fsIAotConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_fsIAotConverter_FWDDECL)
#define IL2CPP_STRUCT_fsIAotConverter_FWDDECL
#include <Modloader/app/structs/fsIAotConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_fsIAotConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsIAotConverter_DEFINED) && !defined(IL2CPP_STRUCT_fsIAotConverter_FWDDECL)
#include <Modloader/app/structs/fsIAotConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsIAotConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

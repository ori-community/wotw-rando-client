#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRun_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRun_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRun_DEFINED)
#include <Modloader/app/structs/SeinRun__Fields.h>
#if defined(IL2CPP_STRUCT_SeinRun__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRun_DEFINED
struct SeinRun__Class;
struct SeinRun {
    struct SeinRun__Class* klass;
    MonitorData* monitor;
    struct SeinRun__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRun_FWDDECL)
#define IL2CPP_STRUCT_SeinRun_FWDDECL
#include <Modloader/app/structs/SeinRun__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinRun_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRun_DEFINED) && !defined(IL2CPP_STRUCT_SeinRun_FWDDECL)
#include <Modloader/app/structs/SeinRun.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRun.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

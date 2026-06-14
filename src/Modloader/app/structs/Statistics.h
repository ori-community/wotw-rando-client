#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Statistics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Statistics_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statistics_DEFINED)
#include <Modloader/app/structs/Statistics__Fields.h>
#if defined(IL2CPP_STRUCT_Statistics__Fields_DEFINED)
#define IL2CPP_STRUCT_Statistics_DEFINED
struct Statistics__Class;
struct Statistics {
    struct Statistics__Class* klass;
    MonitorData* monitor;
    struct Statistics__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Statistics_FWDDECL)
#define IL2CPP_STRUCT_Statistics_FWDDECL
#include <Modloader/app/structs/Statistics__Class.h>
#endif
#undef IL2CPP_STRUCT_Statistics_INITIALIZING
#if !defined(IL2CPP_STRUCT_Statistics_DEFINED) && !defined(IL2CPP_STRUCT_Statistics_FWDDECL)
#include <Modloader/app/structs/Statistics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Statistics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

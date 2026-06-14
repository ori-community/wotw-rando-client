#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water_DEFINED)
#include <Modloader/app/structs/Water__Fields.h>
#if defined(IL2CPP_STRUCT_Water__Fields_DEFINED)
#define IL2CPP_STRUCT_Water_DEFINED
struct Water__Class;
struct Water {
    struct Water__Class* klass;
    MonitorData* monitor;
    struct Water__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water_FWDDECL)
#define IL2CPP_STRUCT_Water_FWDDECL
#include <Modloader/app/structs/Water__Class.h>
#endif
#undef IL2CPP_STRUCT_Water_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water_DEFINED) && !defined(IL2CPP_STRUCT_Water_FWDDECL)
#include <Modloader/app/structs/Water.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

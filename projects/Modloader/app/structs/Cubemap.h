#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cubemap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cubemap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cubemap_DEFINED)
#include <Modloader/app/structs/Cubemap__Fields.h>
#if defined(IL2CPP_STRUCT_Cubemap__Fields_DEFINED)
#define IL2CPP_STRUCT_Cubemap_DEFINED
struct Cubemap__Class;
struct Cubemap {
    struct Cubemap__Class* klass;
    MonitorData* monitor;
    struct Cubemap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cubemap_FWDDECL)
#define IL2CPP_STRUCT_Cubemap_FWDDECL
#include <Modloader/app/structs/Cubemap__Class.h>
#endif
#undef IL2CPP_STRUCT_Cubemap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cubemap_DEFINED) && !defined(IL2CPP_STRUCT_Cubemap_FWDDECL)
#include <Modloader/app/structs/Cubemap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cubemap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

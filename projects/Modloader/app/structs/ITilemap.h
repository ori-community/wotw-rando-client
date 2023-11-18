#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITilemap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITilemap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITilemap_DEFINED)
#include <Modloader/app/structs/ITilemap__Fields.h>
#if defined(IL2CPP_STRUCT_ITilemap__Fields_DEFINED)
#define IL2CPP_STRUCT_ITilemap_DEFINED
struct ITilemap__Class;
struct ITilemap {
    struct ITilemap__Class* klass;
    MonitorData* monitor;
    struct ITilemap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ITilemap_FWDDECL)
#define IL2CPP_STRUCT_ITilemap_FWDDECL
#include <Modloader/app/structs/ITilemap__Class.h>
#endif
#undef IL2CPP_STRUCT_ITilemap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITilemap_DEFINED) && !defined(IL2CPP_STRUCT_ITilemap_FWDDECL)
#include <Modloader/app/structs/ITilemap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITilemap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

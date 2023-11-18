#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormPlaceholder_DEFINED)
#include <Modloader/app/structs/SandWormPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SandWormPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormPlaceholder_DEFINED
struct SandWormPlaceholder__Class;
struct SandWormPlaceholder {
    struct SandWormPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SandWormPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SandWormPlaceholder_FWDDECL
#include <Modloader/app/structs/SandWormPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SandWormPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SandWormPlaceholder_FWDDECL)
#include <Modloader/app/structs/SandWormPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BloomAndFlares_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BloomAndFlares_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomAndFlares_DEFINED)
#include <Modloader/app/structs/BloomAndFlares__Fields.h>
#if defined(IL2CPP_STRUCT_BloomAndFlares__Fields_DEFINED)
#define IL2CPP_STRUCT_BloomAndFlares_DEFINED
struct BloomAndFlares__Class;
struct BloomAndFlares {
    struct BloomAndFlares__Class* klass;
    MonitorData* monitor;
    struct BloomAndFlares__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BloomAndFlares_FWDDECL)
#define IL2CPP_STRUCT_BloomAndFlares_FWDDECL
#include <Modloader/app/structs/BloomAndFlares__Class.h>
#endif
#undef IL2CPP_STRUCT_BloomAndFlares_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomAndFlares_DEFINED) && !defined(IL2CPP_STRUCT_BloomAndFlares_FWDDECL)
#include <Modloader/app/structs/BloomAndFlares.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BloomAndFlares.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

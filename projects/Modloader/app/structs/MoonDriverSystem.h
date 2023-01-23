#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDriverSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDriverSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriverSystem_DEFINED)
#include <Modloader/app/structs/MoonDriverSystem__Fields.h>
#if defined(IL2CPP_STRUCT_MoonDriverSystem__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDriverSystem_DEFINED
struct MoonDriverSystem__Class;
struct MoonDriverSystem {
    struct MoonDriverSystem__Class* klass;
    MonitorData* monitor;
    struct MoonDriverSystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDriverSystem_FWDDECL)
#define IL2CPP_STRUCT_MoonDriverSystem_FWDDECL
#include <Modloader/app/structs/MoonDriverSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonDriverSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriverSystem_DEFINED) && !defined(IL2CPP_STRUCT_MoonDriverSystem_FWDDECL)
#include <Modloader/app/structs/MoonDriverSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDriverSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

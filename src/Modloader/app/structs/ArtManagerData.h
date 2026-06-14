#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtManagerData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtManagerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtManagerData_DEFINED)
#include <Modloader/app/structs/ArtManagerData__Fields.h>
#if defined(IL2CPP_STRUCT_ArtManagerData__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtManagerData_DEFINED
struct ArtManagerData__Class;
struct ArtManagerData {
    struct ArtManagerData__Class* klass;
    MonitorData* monitor;
    struct ArtManagerData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtManagerData_FWDDECL)
#define IL2CPP_STRUCT_ArtManagerData_FWDDECL
#include <Modloader/app/structs/ArtManagerData__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtManagerData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtManagerData_DEFINED) && !defined(IL2CPP_STRUCT_ArtManagerData_FWDDECL)
#include <Modloader/app/structs/ArtManagerData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtManagerData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

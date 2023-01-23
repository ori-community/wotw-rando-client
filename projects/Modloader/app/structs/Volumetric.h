#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Volumetric_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Volumetric_INITIALIZING
#if !defined(IL2CPP_STRUCT_Volumetric_DEFINED)
#include <Modloader/app/structs/Volumetric__Fields.h>
#if defined(IL2CPP_STRUCT_Volumetric__Fields_DEFINED)
#define IL2CPP_STRUCT_Volumetric_DEFINED
struct Volumetric__Class;
struct Volumetric {
    struct Volumetric__Class* klass;
    MonitorData* monitor;
    struct Volumetric__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Volumetric_FWDDECL)
#define IL2CPP_STRUCT_Volumetric_FWDDECL
#include <Modloader/app/structs/Volumetric__Class.h>
#endif
#undef IL2CPP_STRUCT_Volumetric_INITIALIZING
#if !defined(IL2CPP_STRUCT_Volumetric_DEFINED) && !defined(IL2CPP_STRUCT_Volumetric_FWDDECL)
#include <Modloader/app/structs/Volumetric.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Volumetric.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

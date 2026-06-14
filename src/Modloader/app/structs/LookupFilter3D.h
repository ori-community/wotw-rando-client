#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookupFilter3D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookupFilter3D_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupFilter3D_DEFINED)
#include <Modloader/app/structs/LookupFilter3D__Fields.h>
#if defined(IL2CPP_STRUCT_LookupFilter3D__Fields_DEFINED)
#define IL2CPP_STRUCT_LookupFilter3D_DEFINED
struct LookupFilter3D__Class;
struct LookupFilter3D {
    struct LookupFilter3D__Class* klass;
    MonitorData* monitor;
    struct LookupFilter3D__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookupFilter3D_FWDDECL)
#define IL2CPP_STRUCT_LookupFilter3D_FWDDECL
#include <Modloader/app/structs/LookupFilter3D__Class.h>
#endif
#undef IL2CPP_STRUCT_LookupFilter3D_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupFilter3D_DEFINED) && !defined(IL2CPP_STRUCT_LookupFilter3D_FWDDECL)
#include <Modloader/app/structs/LookupFilter3D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookupFilter3D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

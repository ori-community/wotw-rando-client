#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirrorData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirrorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirrorData_DEFINED)
#include <Modloader/app/structs/MirrorData__Fields.h>
#if defined(IL2CPP_STRUCT_MirrorData__Fields_DEFINED)
#define IL2CPP_STRUCT_MirrorData_DEFINED
struct MirrorData__Class;
struct MirrorData {
    struct MirrorData__Class* klass;
    MonitorData* monitor;
    struct MirrorData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirrorData_FWDDECL)
#define IL2CPP_STRUCT_MirrorData_FWDDECL
#include <Modloader/app/structs/MirrorData__Class.h>
#endif
#undef IL2CPP_STRUCT_MirrorData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirrorData_DEFINED) && !defined(IL2CPP_STRUCT_MirrorData_FWDDECL)
#include <Modloader/app/structs/MirrorData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirrorData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

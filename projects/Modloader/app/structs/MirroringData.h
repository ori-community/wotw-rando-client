#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MirroringData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MirroringData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroringData_DEFINED)
#include <Modloader/app/structs/MirroringData__Fields.h>
#if defined(IL2CPP_STRUCT_MirroringData__Fields_DEFINED)
#define IL2CPP_STRUCT_MirroringData_DEFINED
struct MirroringData__Class;
struct MirroringData {
    struct MirroringData__Class* klass;
    MonitorData* monitor;
    struct MirroringData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MirroringData_FWDDECL)
#define IL2CPP_STRUCT_MirroringData_FWDDECL
#include <Modloader/app/structs/MirroringData__Class.h>
#endif
#undef IL2CPP_STRUCT_MirroringData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MirroringData_DEFINED) && !defined(IL2CPP_STRUCT_MirroringData_FWDDECL)
#include <Modloader/app/structs/MirroringData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MirroringData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

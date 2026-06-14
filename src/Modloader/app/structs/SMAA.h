#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_DEFINED)
#include <Modloader/app/structs/SMAA__Fields.h>
#if defined(IL2CPP_STRUCT_SMAA__Fields_DEFINED)
#define IL2CPP_STRUCT_SMAA_DEFINED
struct SMAA__Class;
struct SMAA {
    struct SMAA__Class* klass;
    MonitorData* monitor;
    struct SMAA__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SMAA_FWDDECL)
#define IL2CPP_STRUCT_SMAA_FWDDECL
#include <Modloader/app/structs/SMAA__Class.h>
#endif
#undef IL2CPP_STRUCT_SMAA_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_FWDDECL)
#include <Modloader/app/structs/SMAA.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

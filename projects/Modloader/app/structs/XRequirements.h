#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRequirements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRequirements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRequirements_DEFINED)
#include <Modloader/app/structs/XRequirements__Fields.h>
#if defined(IL2CPP_STRUCT_XRequirements__Fields_DEFINED)
#define IL2CPP_STRUCT_XRequirements_DEFINED
struct XRequirements__Class;
struct XRequirements {
    struct XRequirements__Class* klass;
    MonitorData* monitor;
    struct XRequirements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRequirements_FWDDECL)
#define IL2CPP_STRUCT_XRequirements_FWDDECL
#include <Modloader/app/structs/XRequirements__Class.h>
#endif
#undef IL2CPP_STRUCT_XRequirements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRequirements_DEFINED) && !defined(IL2CPP_STRUCT_XRequirements_FWDDECL)
#include <Modloader/app/structs/XRequirements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRequirements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GeneralNames_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GeneralNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralNames_DEFINED)
#include <Modloader/app/structs/GeneralNames__Fields.h>
#if defined(IL2CPP_STRUCT_GeneralNames__Fields_DEFINED)
#define IL2CPP_STRUCT_GeneralNames_DEFINED
struct GeneralNames__Class;
struct GeneralNames {
    struct GeneralNames__Class* klass;
    MonitorData* monitor;
    struct GeneralNames__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GeneralNames_FWDDECL)
#define IL2CPP_STRUCT_GeneralNames_FWDDECL
#include <Modloader/app/structs/GeneralNames__Class.h>
#endif
#undef IL2CPP_STRUCT_GeneralNames_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeneralNames_DEFINED) && !defined(IL2CPP_STRUCT_GeneralNames_FWDDECL)
#include <Modloader/app/structs/GeneralNames.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GeneralNames.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

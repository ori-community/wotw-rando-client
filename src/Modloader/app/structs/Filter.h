#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Filter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Filter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Filter_DEFINED)
#include <Modloader/app/structs/Filter__Fields.h>
#if defined(IL2CPP_STRUCT_Filter__Fields_DEFINED)
#define IL2CPP_STRUCT_Filter_DEFINED
struct Filter__Class;
struct Filter {
    struct Filter__Class* klass;
    MonitorData* monitor;
    struct Filter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Filter_FWDDECL)
#define IL2CPP_STRUCT_Filter_FWDDECL
#include <Modloader/app/structs/Filter__Class.h>
#endif
#undef IL2CPP_STRUCT_Filter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Filter_DEFINED) && !defined(IL2CPP_STRUCT_Filter_FWDDECL)
#include <Modloader/app/structs/Filter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Filter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

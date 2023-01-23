#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Brain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Brain_INITIALIZING
#if !defined(IL2CPP_STRUCT_Brain_DEFINED)
#include <Modloader/app/structs/Brain__Fields.h>
#if defined(IL2CPP_STRUCT_Brain__Fields_DEFINED)
#define IL2CPP_STRUCT_Brain_DEFINED
struct Brain__Class;
struct Brain {
    struct Brain__Class* klass;
    MonitorData* monitor;
    struct Brain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Brain_FWDDECL)
#define IL2CPP_STRUCT_Brain_FWDDECL
#include <Modloader/app/structs/Brain__Class.h>
#endif
#undef IL2CPP_STRUCT_Brain_INITIALIZING
#if !defined(IL2CPP_STRUCT_Brain_DEFINED) && !defined(IL2CPP_STRUCT_Brain_FWDDECL)
#include <Modloader/app/structs/Brain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Brain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

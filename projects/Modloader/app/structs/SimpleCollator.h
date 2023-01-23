#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleCollator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleCollator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_DEFINED)
#include <Modloader/app/structs/SimpleCollator__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleCollator__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleCollator_DEFINED
struct SimpleCollator__Class;
struct SimpleCollator {
    struct SimpleCollator__Class* klass;
    MonitorData* monitor;
    struct SimpleCollator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleCollator_FWDDECL)
#define IL2CPP_STRUCT_SimpleCollator_FWDDECL
#include <Modloader/app/structs/SimpleCollator__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleCollator_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCollator_DEFINED) && !defined(IL2CPP_STRUCT_SimpleCollator_FWDDECL)
#include <Modloader/app/structs/SimpleCollator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleCollator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

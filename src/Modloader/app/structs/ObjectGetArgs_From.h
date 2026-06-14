#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectGetArgs_From_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectGetArgs_From_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_From_DEFINED)
#include <Modloader/app/structs/ObjectGetArgs_From__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectGetArgs_From__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectGetArgs_From_DEFINED
struct ObjectGetArgs_From__Class;
struct ObjectGetArgs_From {
    struct ObjectGetArgs_From__Class* klass;
    MonitorData* monitor;
    struct ObjectGetArgs_From__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_From_FWDDECL)
#define IL2CPP_STRUCT_ObjectGetArgs_From_FWDDECL
#include <Modloader/app/structs/ObjectGetArgs_From__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectGetArgs_From_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_From_DEFINED) && !defined(IL2CPP_STRUCT_ObjectGetArgs_From_FWDDECL)
#include <Modloader/app/structs/ObjectGetArgs_From.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectGetArgs_From.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

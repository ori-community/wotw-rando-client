#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectGetArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectGetArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_DEFINED)
#include <Modloader/app/structs/ObjectGetArgs__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectGetArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectGetArgs_DEFINED
struct ObjectGetArgs__Class;
struct ObjectGetArgs {
    struct ObjectGetArgs__Class* klass;
    MonitorData* monitor;
    struct ObjectGetArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_FWDDECL)
#define IL2CPP_STRUCT_ObjectGetArgs_FWDDECL
#include <Modloader/app/structs/ObjectGetArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectGetArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectGetArgs_DEFINED) && !defined(IL2CPP_STRUCT_ObjectGetArgs_FWDDECL)
#include <Modloader/app/structs/ObjectGetArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectGetArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

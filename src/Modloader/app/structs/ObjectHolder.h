#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolder_DEFINED)
#include <Modloader/app/structs/ObjectHolder__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectHolder_DEFINED
struct ObjectHolder__Class;
struct ObjectHolder {
    struct ObjectHolder__Class* klass;
    MonitorData* monitor;
    struct ObjectHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectHolder_FWDDECL)
#define IL2CPP_STRUCT_ObjectHolder_FWDDECL
#include <Modloader/app/structs/ObjectHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectHolder_DEFINED) && !defined(IL2CPP_STRUCT_ObjectHolder_FWDDECL)
#include <Modloader/app/structs/ObjectHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

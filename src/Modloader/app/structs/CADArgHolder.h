#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CADArgHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CADArgHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADArgHolder_DEFINED)
#include <Modloader/app/structs/CADArgHolder__Fields.h>
#if defined(IL2CPP_STRUCT_CADArgHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_CADArgHolder_DEFINED
struct CADArgHolder__Class;
struct CADArgHolder {
    struct CADArgHolder__Class* klass;
    MonitorData* monitor;
    struct CADArgHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CADArgHolder_FWDDECL)
#define IL2CPP_STRUCT_CADArgHolder_FWDDECL
#include <Modloader/app/structs/CADArgHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_CADArgHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CADArgHolder_DEFINED) && !defined(IL2CPP_STRUCT_CADArgHolder_FWDDECL)
#include <Modloader/app/structs/CADArgHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CADArgHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

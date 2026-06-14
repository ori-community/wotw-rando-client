#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectNull_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectNull_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectNull_DEFINED)
#include <Modloader/app/structs/ObjectNull__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectNull__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectNull_DEFINED
struct ObjectNull__Class;
struct ObjectNull {
    struct ObjectNull__Class* klass;
    MonitorData* monitor;
    struct ObjectNull__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectNull_FWDDECL)
#define IL2CPP_STRUCT_ObjectNull_FWDDECL
#include <Modloader/app/structs/ObjectNull__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectNull_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectNull_DEFINED) && !defined(IL2CPP_STRUCT_ObjectNull_FWDDECL)
#include <Modloader/app/structs/ObjectNull.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectNull.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

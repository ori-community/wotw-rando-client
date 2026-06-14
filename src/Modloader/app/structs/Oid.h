#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Oid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Oid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Oid_DEFINED)
#include <Modloader/app/structs/Oid__Fields.h>
#if defined(IL2CPP_STRUCT_Oid__Fields_DEFINED)
#define IL2CPP_STRUCT_Oid_DEFINED
struct Oid__Class;
struct Oid {
    struct Oid__Class* klass;
    MonitorData* monitor;
    struct Oid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Oid_FWDDECL)
#define IL2CPP_STRUCT_Oid_FWDDECL
#include <Modloader/app/structs/Oid__Class.h>
#endif
#undef IL2CPP_STRUCT_Oid_INITIALIZING
#if !defined(IL2CPP_STRUCT_Oid_DEFINED) && !defined(IL2CPP_STRUCT_Oid_FWDDECL)
#include <Modloader/app/structs/Oid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Oid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

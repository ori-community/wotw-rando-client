#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_Oid_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_Oid_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Oid_DEFINED)
#include <Modloader/app/structs/X520_Oid__Fields.h>
#if defined(IL2CPP_STRUCT_X520_Oid__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_Oid_DEFINED
struct X520_Oid__Class;
struct X520_Oid {
    struct X520_Oid__Class* klass;
    MonitorData* monitor;
    struct X520_Oid__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_Oid_FWDDECL)
#define IL2CPP_STRUCT_X520_Oid_FWDDECL
#include <Modloader/app/structs/X520_Oid__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_Oid_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_Oid_DEFINED) && !defined(IL2CPP_STRUCT_X520_Oid_FWDDECL)
#include <Modloader/app/structs/X520_Oid.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_Oid.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

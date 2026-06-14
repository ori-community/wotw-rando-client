#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NameOptions_NameDatabase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NameOptions_NameDatabase_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions_NameDatabase_DEFINED)
#include <Modloader/app/structs/NameOptions_NameDatabase__Fields.h>
#if defined(IL2CPP_STRUCT_NameOptions_NameDatabase__Fields_DEFINED)
#define IL2CPP_STRUCT_NameOptions_NameDatabase_DEFINED
struct NameOptions_NameDatabase__Class;
struct NameOptions_NameDatabase {
    struct NameOptions_NameDatabase__Class* klass;
    MonitorData* monitor;
    struct NameOptions_NameDatabase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NameOptions_NameDatabase_FWDDECL)
#define IL2CPP_STRUCT_NameOptions_NameDatabase_FWDDECL
#include <Modloader/app/structs/NameOptions_NameDatabase__Class.h>
#endif
#undef IL2CPP_STRUCT_NameOptions_NameDatabase_INITIALIZING
#if !defined(IL2CPP_STRUCT_NameOptions_NameDatabase_DEFINED) && !defined(IL2CPP_STRUCT_NameOptions_NameDatabase_FWDDECL)
#include <Modloader/app/structs/NameOptions_NameDatabase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NameOptions_NameDatabase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

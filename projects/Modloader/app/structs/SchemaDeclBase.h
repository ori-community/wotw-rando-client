#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaDeclBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaDeclBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaDeclBase_DEFINED)
#include <Modloader/app/structs/SchemaDeclBase__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaDeclBase__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaDeclBase_DEFINED
struct SchemaDeclBase__Class;
struct SchemaDeclBase {
    struct SchemaDeclBase__Class* klass;
    MonitorData* monitor;
    struct SchemaDeclBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaDeclBase_FWDDECL)
#define IL2CPP_STRUCT_SchemaDeclBase_FWDDECL
#include <Modloader/app/structs/SchemaDeclBase__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaDeclBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaDeclBase_DEFINED) && !defined(IL2CPP_STRUCT_SchemaDeclBase_FWDDECL)
#include <Modloader/app/structs/SchemaDeclBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaDeclBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

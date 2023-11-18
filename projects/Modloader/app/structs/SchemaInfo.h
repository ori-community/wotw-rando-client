#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaInfo_DEFINED)
#include <Modloader/app/structs/SchemaInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SchemaInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SchemaInfo_DEFINED
struct SchemaInfo__Class;
struct SchemaInfo {
    struct SchemaInfo__Class* klass;
    MonitorData* monitor;
    struct SchemaInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SchemaInfo_FWDDECL)
#define IL2CPP_STRUCT_SchemaInfo_FWDDECL
#include <Modloader/app/structs/SchemaInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaInfo_DEFINED) && !defined(IL2CPP_STRUCT_SchemaInfo_FWDDECL)
#include <Modloader/app/structs/SchemaInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaBuilder_DEFINED)
#define IL2CPP_STRUCT_SchemaBuilder_DEFINED
struct SchemaBuilder__Class;
struct SchemaBuilder {
    struct SchemaBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SchemaBuilder_FWDDECL)
#define IL2CPP_STRUCT_SchemaBuilder_FWDDECL
#include <Modloader/app/structs/SchemaBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemaBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaBuilder_DEFINED) && !defined(IL2CPP_STRUCT_SchemaBuilder_FWDDECL)
#include <Modloader/app/structs/SchemaBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

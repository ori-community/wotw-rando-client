#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_DEFINED)
#include <Modloader/app/structs/JsonBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_JsonBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonBuilder_DEFINED
struct JsonBuilder__Class;
struct JsonBuilder {
    struct JsonBuilder__Class* klass;
    MonitorData* monitor;
    struct JsonBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonBuilder_FWDDECL)
#define IL2CPP_STRUCT_JsonBuilder_FWDDECL
#include <Modloader/app/structs/JsonBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonBuilder_DEFINED) && !defined(IL2CPP_STRUCT_JsonBuilder_FWDDECL)
#include <Modloader/app/structs/JsonBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

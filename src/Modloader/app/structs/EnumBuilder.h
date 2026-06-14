#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumBuilder_DEFINED)
#include <Modloader/app/structs/EnumBuilder__Fields.h>
#if defined(IL2CPP_STRUCT_EnumBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumBuilder_DEFINED
struct EnumBuilder__Class;
struct EnumBuilder {
    struct EnumBuilder__Class* klass;
    MonitorData* monitor;
    struct EnumBuilder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumBuilder_FWDDECL)
#define IL2CPP_STRUCT_EnumBuilder_FWDDECL
#include <Modloader/app/structs/EnumBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumBuilder_DEFINED) && !defined(IL2CPP_STRUCT_EnumBuilder_FWDDECL)
#include <Modloader/app/structs/EnumBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

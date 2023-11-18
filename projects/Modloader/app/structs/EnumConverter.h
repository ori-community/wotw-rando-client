#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumConverter_DEFINED)
#include <Modloader/app/structs/EnumConverter__Fields.h>
#if defined(IL2CPP_STRUCT_EnumConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_EnumConverter_DEFINED
struct EnumConverter__Class;
struct EnumConverter {
    struct EnumConverter__Class* klass;
    MonitorData* monitor;
    struct EnumConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnumConverter_FWDDECL)
#define IL2CPP_STRUCT_EnumConverter_FWDDECL
#include <Modloader/app/structs/EnumConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumConverter_DEFINED) && !defined(IL2CPP_STRUCT_EnumConverter_FWDDECL)
#include <Modloader/app/structs/EnumConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

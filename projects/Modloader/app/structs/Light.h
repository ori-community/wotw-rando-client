#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Light_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Light_INITIALIZING
#if !defined(IL2CPP_STRUCT_Light_DEFINED)
#include <Modloader/app/structs/Light__Fields.h>
#if defined(IL2CPP_STRUCT_Light__Fields_DEFINED)
#define IL2CPP_STRUCT_Light_DEFINED
struct Light__Class;
struct Light {
    struct Light__Class* klass;
    MonitorData* monitor;
    struct Light__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Light_FWDDECL)
#define IL2CPP_STRUCT_Light_FWDDECL
#include <Modloader/app/structs/Light__Class.h>
#endif
#undef IL2CPP_STRUCT_Light_INITIALIZING
#if !defined(IL2CPP_STRUCT_Light_DEFINED) && !defined(IL2CPP_STRUCT_Light_FWDDECL)
#include <Modloader/app/structs/Light.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Light.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonVector4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonVector4_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector4_DEFINED)
#include <Modloader/app/structs/MoonVector4__Fields.h>
#if defined(IL2CPP_STRUCT_MoonVector4__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonVector4_DEFINED
struct MoonVector4__Class;
struct MoonVector4 {
    struct MoonVector4__Class* klass;
    MonitorData* monitor;
    struct MoonVector4__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonVector4_FWDDECL)
#define IL2CPP_STRUCT_MoonVector4_FWDDECL
#include <Modloader/app/structs/MoonVector4__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonVector4_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector4_DEFINED) && !defined(IL2CPP_STRUCT_MoonVector4_FWDDECL)
#include <Modloader/app/structs/MoonVector4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonVector4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

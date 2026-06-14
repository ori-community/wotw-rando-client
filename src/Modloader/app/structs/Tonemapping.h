#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tonemapping_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tonemapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tonemapping_DEFINED)
#include <Modloader/app/structs/Tonemapping__Fields.h>
#if defined(IL2CPP_STRUCT_Tonemapping__Fields_DEFINED)
#define IL2CPP_STRUCT_Tonemapping_DEFINED
struct Tonemapping__Class;
struct Tonemapping {
    struct Tonemapping__Class* klass;
    MonitorData* monitor;
    struct Tonemapping__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tonemapping_FWDDECL)
#define IL2CPP_STRUCT_Tonemapping_FWDDECL
#include <Modloader/app/structs/Tonemapping__Class.h>
#endif
#undef IL2CPP_STRUCT_Tonemapping_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tonemapping_DEFINED) && !defined(IL2CPP_STRUCT_Tonemapping_FWDDECL)
#include <Modloader/app/structs/Tonemapping.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tonemapping.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

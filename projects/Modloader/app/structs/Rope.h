#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rope_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rope_DEFINED)
#include <Modloader/app/structs/Rope__Fields.h>
#if defined(IL2CPP_STRUCT_Rope__Fields_DEFINED)
#define IL2CPP_STRUCT_Rope_DEFINED
struct Rope__Class;
struct Rope {
    struct Rope__Class* klass;
    MonitorData* monitor;
    struct Rope__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rope_FWDDECL)
#define IL2CPP_STRUCT_Rope_FWDDECL
#include <Modloader/app/structs/Rope__Class.h>
#endif
#undef IL2CPP_STRUCT_Rope_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rope_DEFINED) && !defined(IL2CPP_STRUCT_Rope_FWDDECL)
#include <Modloader/app/structs/Rope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

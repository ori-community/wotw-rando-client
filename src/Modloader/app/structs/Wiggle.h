#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Wiggle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Wiggle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wiggle_DEFINED)
#include <Modloader/app/structs/Wiggle__Fields.h>
#if defined(IL2CPP_STRUCT_Wiggle__Fields_DEFINED)
#define IL2CPP_STRUCT_Wiggle_DEFINED
struct Wiggle__Class;
struct Wiggle {
    struct Wiggle__Class* klass;
    MonitorData* monitor;
    struct Wiggle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Wiggle_FWDDECL)
#define IL2CPP_STRUCT_Wiggle_FWDDECL
#include <Modloader/app/structs/Wiggle__Class.h>
#endif
#undef IL2CPP_STRUCT_Wiggle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wiggle_DEFINED) && !defined(IL2CPP_STRUCT_Wiggle_FWDDECL)
#include <Modloader/app/structs/Wiggle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Wiggle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif

#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vibrance_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vibrance_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vibrance_DEFINED)
#include <Modloader/app/structs/Vibrance__Fields.h>
#if defined(IL2CPP_STRUCT_Vibrance__Fields_DEFINED)
#define IL2CPP_STRUCT_Vibrance_DEFINED
struct Vibrance__Class;
struct Vibrance {
    struct Vibrance__Class* klass;
    MonitorData* monitor;
    struct Vibrance__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vibrance_FWDDECL)
#define IL2CPP_STRUCT_Vibrance_FWDDECL
#include <Modloader/app/structs/Vibrance__Class.h>
#endif
#undef IL2CPP_STRUCT_Vibrance_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vibrance_DEFINED) && !defined(IL2CPP_STRUCT_Vibrance_FWDDECL)
#include <Modloader/app/structs/Vibrance.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vibrance.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
